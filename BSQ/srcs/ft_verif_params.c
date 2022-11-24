/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocassany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:39:10 by ocassany          #+#    #+#             */
/*   Updated: 2022/11/23 22:02:00 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_verif_params(t_params params)
{
	if (params.empty == params.obstacle)
		return (0);
	if (params.empty == params.full)
		return (0);
	if (params.obstacle == params.full)
		return (0);
	if (params.empty < 32 || params.empty > 126)
		return (0);
	if (params.full < 32 || params.full > 126)
		return (0);
	if (params.obstacle < 32 || params.obstacle > 126)
		return (0);
	return (1);
}

int	verif_map(t_params params, char **tab)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = -42;
	while (i < params.lines)
	{
		j = 0;
		while (tab[i][j])
		{
			if (!(tab[i][j] == params.empty || tab[i][j] == params.obstacle))
				return (0);
			j++;
		}
		if (size == -42)
			size = j;
		if (size != j)
			return (0);
		i++;
	}
	return (1);
}
