/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:17:13 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/22 15:51:58 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	*range = malloc(r * sizeof(int));
	i = 0;
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (i);
}
