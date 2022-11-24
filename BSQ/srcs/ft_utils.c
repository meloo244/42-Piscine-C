/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:58:35 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/22 18:37:22 by ocassany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char src)
{
	int	i;

	i = ft_strlen(dest);
	dest[i] = src;
	dest[i + 1] = '\0';
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
