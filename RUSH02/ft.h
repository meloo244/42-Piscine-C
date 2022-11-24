/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:38:48 by tlorne            #+#    #+#             */
/*   Updated: 2022/11/20 17:53:11 by tlorne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define ERROR "Error, wrong number of argument\n"
# define ERRORD "Error, argument not valid\n"

typedef struct s_point
{
	int	c;
	int	d;
	int	u;
	int	du;
	int	compteur;
}		t_part_str;

typedef struct m_point
{
	char	*str_c;
	char	*str_d;
	char	*str_u;
	char	*str_du;
	char	*str_compteur;
}		t_part_word;

t_part_str	*ft_work_num(int argc, char **argv);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
void		ft_show_tab(t_part_str *par);
t_part_str	*ft_work_num(int argc, char **argv);
int			ft_atoi(char *str);
int			ft_open(void);
int			ft_strlen(void);
char		**ft_split(char *str, char *charset);
int			ft_strln(char *str);
int			ft_instr(char *str, char c);
char		*ft_strndup(char *src, int n);
void		ft_aff(char *buff, t_part_str *part);

#endif
