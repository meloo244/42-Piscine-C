/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:56:09 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 15:41:18 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_open(void)
{
	int	fd;

	fd = open("numbers.dict", O_RDWR);
	if (fd == -1)
		ft_putstr("ERROR, OPEN FAILED\n");
	return (fd);
}

int	ft_strlen(void)
{
	int		fd;
	int		size;
	char	*temp[1000];
	int		len;

	fd = open("numbers.dict", O_RDWR);
	size = 0;
	len = 1;
	while (len != 0)
	{
		len = read(fd, temp, 1000);
		size += len;
	}
	close(fd);
	return (size);
}
