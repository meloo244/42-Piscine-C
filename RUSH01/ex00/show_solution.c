/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:00:15 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/12 18:22:25 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_solution(int tab[4][4])
{
	int		col;
	int		row;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = 48 + tab[row][col];
			write(1, &c, 1);
			if (col == 3)
				write(1, "\n", 1);
			else
				write(1, ",", 1);
			col++;
		}
		row++;
	}
}
