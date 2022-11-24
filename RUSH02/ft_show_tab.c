/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:31:59 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 15:56:50 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "\n", 1);
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_show_tab(t_part_str *par)
{
	int	i;

	i = 0;
	while (par[i].u)
	{
		ft_putnbr(par[i].c);
		write(1, "\n", 1);
		ft_putnbr(par[i].d);
		write(1, "\n", 1);
		ft_putnbr(par[i].u);
		write(1, "\n", 1);
		ft_putnbr(par[i].du);
		write(1, "\n", 1);
		ft_putnbr(par[i].compteur);
		write(1, "\n", 1);
		i++;
	}
}
