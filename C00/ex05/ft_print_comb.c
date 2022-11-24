/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:24:48 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/05 14:10:18 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*bibli*/

void	ft_print_comb(void) /*function*/
{
	char	a; /*varible */
	char	b;
	char	c; 

	a = '0';
	while (a <= '7') /*boucle*/	 /* 48 */	 /* une fois finis = 49 */
	{
		b = a + 1; /*a + 1 carractere ascii */	 /* +1 a 48 */	 /* +1 as 49 = 50*/
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9') /* +1 a 49*/	 /* 51 et il les imprime puis refait la boucle */
			{
				write (1, &a, 1); /* imprime ce que A la varible  ascii de 'a'*/ 
				write (1, &b, 1); /* pareille avec b */
				write (1, &c, 1); /* pareille avec c */
				if (a != '7') /*si a n'est pas egale as 7 il continue la suite {as partir de 7 il s'arrete la*/
					write (1, ", ", 2); /*s'occupe de la mise en forme du programme */
				c++; /*avence l'unite de 1*/
			}
			b++; /*avance la dizaine de 1*/
		}
		a++; /*avance la centaine*/
	}
}
