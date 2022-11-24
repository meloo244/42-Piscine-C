/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:39:33 by mchiboub          #+#    #+#             */
/*   Updated: 2022/11/23 21:50:09 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_params
{
	int		lines;
	char	empty;
	char	obstacle;
	char	full;
}			t_params;
typedef struct s_square
{
	int		x;
	int		y;
}			t_square;

void	file_input(int argc, char *argv[]);
void	standard_input(void);
int		ft_verif_params(t_params params);
int		verif_map(t_params params, char **tab);
void	find_square(char **tab, t_params params);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_strcat(char *dest, char src);
void	ft_strcpy(char *dest, char *src);
void	free_mallocs(int lines, char **tab);

#endif
