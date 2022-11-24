/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:34:19 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/13 18:42:51 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		check_arguments(char *str);
void	problem_conversion(char *str, int tdlr[4][4]);
void	making_flags(int tdlr[4][4], int flags[4][4]);
void	start_solution(int tab[4][4], int flags[4][4]);
int		make_solution(int tab[4][4], int flags[4][4], int row, int col);
int		validate_top(int tab[4][4], int top[4]);
int		validate_down(int tab[4][4], int down[4]);
int		validate_left(int tab[4][4], int left[4]);
int		validate_right(int tab[4][4], int right[4]);
int		validate_rows(int tab[4][4]);
int		validate_cols(int tab[4][4]);
int		validate_doubles_rows(int tab[4][4]);
int		validate_doubles_cols(int tab[4][4]);
void	show_solution(int tab[4][4]);

int	check_solution(int tab[4][4], int tdlr[4][4])
{
	if (!validate_top(tab, tdlr[0]))
		return (0);
	if (!validate_down(tab, tdlr[1]))
		return (0);
	if (!validate_left(tab, tdlr[2]))
		return (0);
	if (!validate_right(tab, tdlr[3]))
		return (0);
	if (!validate_rows(tab))
		return (0);
	if (!validate_cols(tab))
		return (0);
	if (!validate_doubles_rows(tab))
		return (0);
	if (!validate_doubles_cols(tab))
		return (0);
	return (1);
}

int	start_game(int tdlr[4][4], int flags[4][4], int tab[4][4])
{
	making_flags(tdlr, flags);
	start_solution(tab, flags);
	while (1)
	{
		if (make_solution(tab, flags, 3, 3))
		{
			if (check_solution(tab, tdlr))
			{
				show_solution(tab);
				return (0);
			}
		}
		else
		{
			write(1, "error\n", 6);
			return (0);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	tab[4][4];
	int	tdlr[4][4];
	int	flags[4][4];

	if (argc != 2 || !check_arguments(argv[1]))
	{
		write(1, "error\n", 6);
		return (0);
	}
	problem_conversion(argv[1], tdlr);
	return (start_game(tdlr, flags, tab));
}
