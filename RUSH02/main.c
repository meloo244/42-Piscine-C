/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:52:03 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 18:40:41 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	check_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				return (0);
			i++;
		}
	}
	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[2][i] < '0' || argv[2][i] > '9')
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_check_arg(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		ft_putstr(ERROR);
		return (0);
	}
	if (check_arg(argc, argv) == 0)
	{
		ft_putstr(ERRORD);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_part_str	*part;
	int			fd;
	char		*buff;

	part = malloc(sizeof(t_part_str) * 5);
	if (ft_check_arg(argc, argv) == 0)
		return (0);
	part = ft_work_num(argc, argv);
	ft_show_tab(part);
	fd = ft_open();
	buff = (char *)malloc(ft_strlen());
	read(fd, buff, ft_strlen());
	return (0);
}
