/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:36:29 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/16 10:31:51 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 0;
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
