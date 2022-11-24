/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:11:42 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/24 13:11:47 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	q;

	q = 0;
	while (str[q] != '\0')
	{
		write(1, &str[q], 1);
		q++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	res;
	char			q;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	res = nb;
	if (res <= 9)
	{
		q = res + '0';
		write(1, &q, 1);
	}
	else
	{
		ft_putnbr(res / 10);
		q = res % 10 + '0';
		write(1, &q, 1);
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int	q;

	q = 0;
	while (par[q].str != 0)
	{
		ft_putstr(par[q].str);
		write(1, "\n", 1);
		ft_putnbr(par[q].size);
		write(1, "\n", 1);
		ft_putstr(par[q].copy);
		write(1, "\n", 1);
		q++;
	}
}
