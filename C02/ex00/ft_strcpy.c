/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:31:43 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/07 05:47:08 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	mel;

	mel = 0;
	while (src[mel] != '\0')
	{
		dest[mel] = src[mel];
		mel++;
	}
	dest[mel] = '\0';
	return (dest);
}
