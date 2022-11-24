/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:11:56 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 17:07:46 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_part_str	*ft_work_num(int argc, char **argv)
{
	int			i;
	int			nb;
	t_part_str	*part;

	i = 0;
	part = malloc(sizeof(t_part_str) * 5);
	if (argc == 2)
		nb = ft_atoi(argv[1]);
	else
		nb = ft_atoi(argv[2]);
	while (nb != 0 && i < 4)
	{
		part[i].c = (nb % 1000) / 100;
		part[i].d = (((nb % 1000) / 10) % 10);
		part[i].u = (nb % 1000) % 10;
		part[i].du = (nb % 1000) % 100;
		part[i].compteur = i;
		i++;
		nb = nb / 1000;
	}
	part[i].c = 0;
	return (part);
}

/*
t_part_word	*ft_part_word(t_part_str *part)
{
	int			i;
	t_part_word	*word;

	i = 0;
	word = malloc(sizeof(t_part_word) * 5);
	while (part[i].u)
	{
		word[i].str_c = getword(part[i].c);
		word[i].str_du = getword(part[i].du);
		word[i].str_d = getword(part[i].d);
		word[i].str_u = getword(part[i].u);
		word[i].str_compteur = getword(part[i].compteur);
		i++;
	}
	word[i].str_c = '\0';
	return (word);
}*/
