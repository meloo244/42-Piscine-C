/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:42:11 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/12 18:41:07 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_top(int tab[4][4], int top[4])
{
	int	col;
	int	row;
	int	vision_skyscraper;
	int	skyscraper;

	col = 0;
	while (col < 4)
	{
		vision_skyscraper = 0;
		skyscraper = 0;
		row = 0;
		while (row < 4)
		{
			if (tab[row][col] > skyscraper)
			{
				vision_skyscraper++;
				skyscraper = tab[row][col];
			}
			row++;
		}
		if (vision_skyscraper != top[col])
			return (0);
		col++;
	}
	return (1);
}

int	validate_down(int tab[4][4], int down[4])
{
	int	col;
	int	row;
	int	vision_skyscraper;
	int	skyscraper;

	col = 0;
	while (col < 4)
	{
		vision_skyscraper = 0;
		skyscraper = 0;
		row = 3;
		while (row >= 0)
		{
			if (tab[row][col] > skyscraper)
			{
				vision_skyscraper++;
				skyscraper = tab[row][col];
			}
			row--;
		}
		if (vision_skyscraper != down[col])
			return (0);
		col++;
	}
	return (1);
}

int	validate_left(int tab[4][4], int left[4])
{
	int	col;
	int	row;
	int	vision_skyscraper;
	int	skyscraper;

	row = 0;
	while (row < 4)
	{
		vision_skyscraper = 0;
		skyscraper = 0;
		col = 0;
		while (col < 4)
		{
			if (tab[row][col] > skyscraper)
			{
				vision_skyscraper++;
				skyscraper = tab[row][col];
			}
			col++;
		}
		if (vision_skyscraper != left[row])
			return (0);
		row++;
	}
	return (1);
}

int	validate_right(int tab[4][4], int right[4])
{
	int	col;
	int	row;
	int	vision_skyscraper;
	int	skyscraper;

	row = 0;
	while (row < 4)
	{
		vision_skyscraper = 0;
		skyscraper = 0;
		col = 3;
		while (col >= 0)
		{
			if (tab[row][col] > skyscraper)
			{
				vision_skyscraper++;
				skyscraper = tab[row][col];
			}
			col--;
		}
		if (vision_skyscraper != right[row])
			return (0);
		row++;
	}
	return (1);
}
