/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 16:08:05 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/24 20:33:22 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split.h"

int		ft_line_count(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == '\n')
			count++;
		str++;
	}
	return (count);
}

int		*ft_line_len_tab(char *str, int line_count)
{
	int		*line_len_tab;
	int		size;
	int		i;

	line_len_tab = (int*)malloc(sizeof(int) * line_count);
	i = 0;
	while (i < line_count)
	{
		size = 0;
		while (*str && *str != '\n')
		{
			size++;
			str++;
		}
		if (*str == '\n')
			str++;
		line_len_tab[i] = size + 1;
		i++;
	}
	return (line_len_tab);
}

char	**ft_split(char *str)
{
	char	**tab_lines;
	int		*line_len_tab;
	int		line_count;
	int		i;
	int		j;

	line_count = ft_line_count(str);
	line_len_tab = ft_line_len_tab(str, line_count);
	tab_lines = (char**)malloc(sizeof(char*) * (line_count + 1));
	i = -1;
	while (++i < line_count)
	{
		tab_lines[i] = (char*)malloc(sizeof(char) * (line_len_tab[i] + 1));
		j = -1;
		while (++j < line_len_tab[i])
		{
			tab_lines[i][j] = *str;
			str++;
		}
		tab_lines[i][j] = '\0';
	}
	tab_lines[i] = 0;
	return (tab_lines);
}
