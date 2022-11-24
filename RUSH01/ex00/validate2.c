/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:36:43 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/13 18:43:22 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_rows(int tab[4][4])
{
	int	col;
	int	row;
	int	total;

	row = 0;
	while (row < 4)
	{
		total = 0;
		col = 0;
		while (col < 4)
		{
			total += tab[row][col];
			col++;
		}
		if (total != 10)
			return (0);
		row++;
	}
	return (1);
}

int	validate_cols(int tab[4][4])
{
	int	col;
	int	row;
	int	total;

	col = 0;
	while (col < 4)
	{
		total = 0;
		row = 0;
		while (row < 4)
		{
			total += tab[row][col];
			row++;
		}
		if (total != 10)
			return (0);
		col++;
	}
	return (1);
}

int	validate_doubles_rows(int tab[4][4])
{
	int	col;
	int	row;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col < 3)
		{
			if (tab[row][col] == tab[row][col + 1])
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	validate_doubles_cols(int tab[4][4])
{
	int	col;
	int	row;

	col = 0;
	while (col <= 3)
	{
		row = 0;
		while (row < 3)
		{
			if (tab[row][col] == tab[row + 1][col])
				return (0);
			row++;
		}
		col++;
	}
	return (1);
}
