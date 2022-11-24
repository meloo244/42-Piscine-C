/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:08:39 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 17:55:43 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_aff(char *buff, t_part_str *part)
{
	int	i;

	i = 0;
	while (part[i].c)
		i++;
	while (i >= 0)
	{
		if (part[i].c == 0)
		{
			ft_putstr(buff[(part[i].c) * 2 + 1]);
			ft_putstr("hundred");
		}
		if (part[i].du > 9 && part[i].du < 21)
			ft_putstr(buff[(part[i].du) * 2 + 1]);
		else
		{
			ft_putstr(buff[(part[i].d) * 2 + 1]);
			ft_putstr(buff[(part[i].u) * 2 + 1]);
		}
		if (part[i].compteur != 0)
			ft_putstr(buff[(part[i].compteur) * 2 + 58 + 1]);
		i++;
	}
}
