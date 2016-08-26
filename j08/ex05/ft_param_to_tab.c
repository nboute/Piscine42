/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:14:57 by nboute            #+#    #+#             */
/*   Updated: 2016/08/17 14:48:50 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*sctab;

	i = 0;
	sctab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (sctab == 0)
		return (0);
	while (i < ac)
	{
		sctab[i].size_param = ft_strlen(av[i]);
		sctab[i].str = av[i];
		sctab[i].copy = ft_strdup(av[i]);
		sctab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	sctab[i].str = 0;
	return (sctab);
}
