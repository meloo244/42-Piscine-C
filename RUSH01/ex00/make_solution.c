/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:02:28 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/13 17:47:12 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_solution(int tab[4][4], int flags[4][4], int row, int col)
{
	while (row >= 0)
	{
		while (col >= 0)
		{
			if (flags[row][col] == 0)
			{
				tab[row][col]++;
				if (tab[row][col] > 4)
					tab[row][col] = 1;
				else
					return (1);
			}
			col--;
		}
		if (col < 0)
			col = 3;
		row--;
	}
	return (0);
}

void	start_solution(int tab[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			if (flags[row][col] > 0)
				tab[row][col] = flags[row][col];
			else
				tab[row][col] = 1;
			col++;
		}
		row++;
	}
}
