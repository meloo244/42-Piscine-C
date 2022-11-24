/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:33:15 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/21 17:59:59 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	r;
	int	*b;
	int	i;

	if (min >= max)
		return (0);
	r = max - min;
	b = malloc(r * sizeof(int));
	if (b == NULL)
		return (0);
	i = 0;
	while (i < r)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
