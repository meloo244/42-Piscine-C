/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:34:11 by mmarie            #+#    #+#             */
/*   Updated: 2022/11/24 14:01:19 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char	*str)
{
	int						i;
	char					*nx;

	i = -1;
	nx = (char *) malloc((ft_strlem(str) + 1) * sizeof(char));
	while (str[i++])
		nx[i] = str[i];
	nx[i] = 0;
	return (nx);
}

struct	s_stock _str	*ft_strs_to_tab(int ac, char **av)
{
	struct s stock str		*tab;
	int						i;

	i = -1;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
