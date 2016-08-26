/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:23:57 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 16:28:10 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_tab(char **tab, char *str, char *sep)
{
	int	i;
	int	chars;
	int	j;

	i = 0;
	chars = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			str[chars++] = tab[i][j++];
		j = 0;
		while (tab[i + 1] && sep[j])
			str[chars++] = sep[j++];
		i++;
	}
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		chars;
	int		k;
	char	*str;

	chars = 0;
	i = 0;
	k = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			chars++;
			j++;
		}
		i++;
	}
	while (sep[k])
		k++;
	str = (char*)malloc(sizeof(*tab) * (chars + 1 + (j * i)));
	ft_fill_tab(tab, str, sep);
	return (str);
}
