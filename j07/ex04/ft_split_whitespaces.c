/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 10:41:24 by nboute            #+#    #+#             */
/*   Updated: 2016/08/17 11:15:41 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		wlen(char *str, int i)
{
	int n;

	n = 0;
	while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
	{
		i++;
		n++;
	}
	return (n);
}

int		ft_nb_words(char *str)
{
	int i;
	int words;
	int isword;

	i = 0;
	words = 0;
	isword = 0;
	while (str[i])
	{
		while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
		{
			isword = 1;
			i++;
		}
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\0')
		{
			words += (isword == 1) ? 1 : 0;
			isword = 0;
			i += (str[i] == '\0') ? 0 : 1;
		}
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	int		word;
	int		i;
	int		j;
	char	**tab;

	if ((tab = malloc(sizeof(char**) * (ft_nb_words(str) + 1))) == NULL)
		return (0);
	i = 0;
	word = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && (str[i]))
			i++;
		if (str[i])
		{
			j = 0;
			if (((tab[word] = malloc(sizeof(char*) * (wlen(str, i) + 1))) == 0))
				return (0);
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
				tab[word][j++] = str[i++];
			tab[word++][j] = '\0';
		}
	}
	tab[word] = 0;
	return (tab);
}
