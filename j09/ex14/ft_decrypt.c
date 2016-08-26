/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:09:59 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 15:33:28 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

char		*ft_getname(int *i, char *str)
{
	int		j;
	char	*name;

	j = 0;
	name = (char*)malloc(sizeof(*name) * (500));
	while ((str[*i] >= 'a' && str[*i] <= 'z')
			|| (str[*i] >= 'A' && str[*i] <= 'Z'))
	{
		name[j++] = str[*i++];
	}
	name[j] = '\0';
	return (name);
}

int			ft_getage(int *i, char *str)
{
	int age;

	age = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		age = (age * 10) + (str[*i] - '0');
		*i += 1;
	}
	return (age);
}

t_perso		**ft_create_struct_tab(char *str, int nbstructs)
{
	int		i;
	int		j;
	t_perso	**tab;

	i = 0;
	j = 0;
	tab = (t_perso**)malloc(sizeof(t_perso**) * (nbstructs + 1));
	while (str[i])
	{
		tab[j]->age = ft_getage(&i, str);
		i++;
		tab[j]->name = ft_getname(&i, str);
		i++;
		j++;
	}
	return (tab);
}

t_perso		**ft_decrypt(char *str)
{
	int i;
	int nbstructs;

	i = 0;
	nbstructs = 0;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		if (str[i] == '|')
			i++;
		while ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		if (str[i] == ';')
			i++;
		nbstructs++;
	}
	return (ft_create_struct_tab(str, nbstructs));
}
