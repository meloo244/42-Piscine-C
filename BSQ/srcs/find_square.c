/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocassany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:10:28 by ocassany          #+#    #+#             */
/*   Updated: 2022/11/23 21:12:03 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	show_solution(char **tab, t_params params, t_square sq, int s)
{
	int	x;
	int	y;

	y = 0;
	while (y < params.lines)
	{
		x = 0;
		while (tab[y][x])
		{
			if (x >= sq.x && x <= (sq.x + s) && y >= sq.y && y <= (sq.y + s))
				write(1, &params.full, 1);
			else
				write(1, &tab[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int	validate_square(char **tab, t_params params, t_square square, int size)
{
	int		x;
	int		y;

	y = square.y;
	while (y <= (square.y + size))
	{
		x = square.x;
		while (x <= (square.x + size))
		{
			if (tab[y][x] == params.obstacle)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

void	make_square(char **tab, t_params params, t_square sq)
{
	int	size;
	int	len;

	size = params.lines;
	len = ft_strlen(tab[0]);
	while (size >= 0)
	{
		sq.y = 0;
		while (sq.y < params.lines - size)
		{
			sq.x = 0;
			while (sq.x < len - size)
			{
				if (validate_square(tab, params, sq, size))
				{
					show_solution(tab, params, sq, size);
					return ;
				}
				sq.x = sq.x + 1;
			}
			sq.y = sq.y + 1;
		}
		size--;
	}
	write (1, "Solution not found!\n", 20);
}

void	find_square(char **tab, t_params params)
{
	t_square	square;

	square.x = 0;
	square.y = 0;
	make_square(tab, params, square);
}
