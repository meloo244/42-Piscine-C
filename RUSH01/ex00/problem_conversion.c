/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem_conversion.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:24:10 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/13 18:03:18 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	problem_conversion(char *str, int tdlr[4][4])
{
	int	i;
	int	row;
	int	col;

	i = 0;
	row = 0;
	col = 0;
	while (str[i] && row <= 3)
	{
		tdlr[row][col] = str[i] - 48;
		col++;
		if (col > 3)
		{
			col = 0;
			row++;
		}
		if (str[i + 1] == '\0')
			i++;
		else
			i += 2;
	}
}
