/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   making_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:12:53 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/13 18:02:49 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	making_flags_top(int tdlr[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (col <= 3)
	{
		if (tdlr[row][col] == 4)
		{
			flags[0][col] = 1;
			flags[1][col] = 2;
			flags[2][col] = 3;
			flags[3][col] = 4;
		}
		else if (tdlr[row][col] == 1)
			flags[0][col] = 4;
		col++;
	}
}

void	making_flags_down(int tdlr[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 1;
	col = 0;
	while (col <= 3)
	{
		if (tdlr[row][col] == 4)
		{
			flags[0][col] = 4;
			flags[1][col] = 3;
			flags[2][col] = 2;
			flags[3][col] = 1;
		}
		else if (tdlr[row][col] == 1)
			flags[3][col] = 4;
		col++;
	}
}

void	making_flags_left(int tdlr[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 2;
	col = 0;
	while (col <= 3)
	{
		if (tdlr[row][col] == 4)
		{
			flags[col][0] = 1;
			flags[col][1] = 2;
			flags[col][2] = 3;
			flags[col][3] = 4;
		}
		else if (tdlr[row][col] == 1)
			flags[col][0] = 4;
		col++;
	}
}

void	making_flags_right(int tdlr[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 3;
	col = 0;
	while (col <= 3)
	{
		if (tdlr[row][col] == 4)
		{
			flags[col][0] = 4;
			flags[col][1] = 3;
			flags[col][2] = 2;
			flags[col][3] = 1;
		}
		else if (tdlr[row][col] == 1)
			flags[col][3] = 4;
		col++;
	}
}

void	making_flags(int tdlr[4][4], int flags[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row <= 3)
	{
		col = 0;
		while (col <= 3)
		{
			flags[row][col] = 0;
			col++;
		}
		row++;
	}
	making_flags_top(tdlr, flags);
	making_flags_down(tdlr, flags);
	making_flags_left(tdlr, flags);
	making_flags_right(tdlr, flags);
}
