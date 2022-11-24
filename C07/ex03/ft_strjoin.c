/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:18:33 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/22 15:52:29 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(int size, char **strs, char *sep)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < size)
	{
		r += ft_strlen(strs[i]);
		i++;
	}
	r += ft_strlen(sep) * (size - 1);
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof (char) * check(size, strs, sep) + 1);
	if (size < 1)
		return (0);
	while (i < size - 1)
	{
		s = ft_strcat(s, strs[i]);
		s = ft_strcat(s, sep);
		i++;
	}
	s = ft_strcat(s, strs[i]);
	s[check(size, strs, sep)] = '\0';
	return (s);
}
