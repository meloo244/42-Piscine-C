/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:19:31 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/12 14:00:32 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_arguments(char *str)
{
	int	i;

	if (ft_strlen(str) != 31)
		return (0);
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				return (0);
			if (str[i + 1] == '\0')
				i++;
			else
				i += 2;
		}
	}
	return (1);
}
