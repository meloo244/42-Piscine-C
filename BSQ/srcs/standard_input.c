/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:58:35 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/23 21:46:12 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	read_params1(t_params *params)
{
	char	str[100000];
	char	buf[1];
	int		tmp;

	str[0] = '\0';
	buf[0] = '\0';
	while (buf[0] != '\n')
	{
		tmp = read(0, buf, 1);
		if (buf[0] != '\n')
			ft_strcat(str, buf[0]);
	}
	tmp = ft_strlen(str);
	params->full = str[tmp - 1];
	params->obstacle = str[tmp - 2];
	params->empty = str[tmp - 3];
	str[tmp - 3] = '\0';
	params->lines = ft_atoi(str);
}

char	**generate_mallocs1(int lines)
{
	char	**tab;
	char	str[100000];
	char	buf[1];
	int		i;

	str[0] = '\0';
	buf[0] = '\0';
	while (buf[0] != '\n')
	{
		i = read(0, buf, 1);
		if (buf[0] != '\n')
			ft_strcat(str, buf[0]);
	}
	tab = malloc(sizeof(char *) * (lines + 1));
	i = 0;
	while (i < lines)
	{
		tab[i] = malloc(sizeof(char) * ft_strlen(str) + 1);
		i++;
	}
	ft_strcpy(tab[0], str);
	return (tab);
}

void	read_map1(t_params params, char **tab)
{
	char	str[100000];
	char	buf[1];
	int		tmp;
	int		i;

	i = 1;
	tmp = 1;
	while (i < params.lines)
	{
		buf[0] = '\0';
		str[0] = '\0';
		while (buf[0] != '\n' && tmp > 0)
		{
			tmp = read(0, buf, 1);
			if (buf[0] != '\n' && tmp > 0)
				ft_strcat(str, buf[0]);
		}
		ft_strcpy(tab[i], str);
		i++;
	}
}

void	standard_input(void)
{
	t_params	params;
	char		**tab;

	read_params1(&params);
	if (ft_verif_params(params))
	{
		tab = generate_mallocs1(params.lines);
		read_map1(params, tab);
		if (verif_map(params, tab))
			find_square(tab, params);
		else
			write(2, "ERROR: Map error!\n", 18);
		free_mallocs(params.lines, tab);
	}
	else
		write(2, "ERROR: Map error!\n", 18);
}
