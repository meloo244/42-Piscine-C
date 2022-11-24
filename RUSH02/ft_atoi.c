/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:06:47 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/10 10:04:48 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	valeur;
	int	nb_moins;

	i = 0;
	valeur = 0;
	nb_moins = 1;
	while (str[i] && ((str[i] < 14 && str[i] > 8) || str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_moins *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	valeur *= nb_moins;
	return (valeur);
}
