/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 01:47:17 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 02:32:30 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int found;

	i = 0;
	j = 0;
	found = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == to_find[0])
		while (to_find[j] == str[i] && to_find[j] && str[i])
		{
			if (to_find[j + 1] == '\0')
				found = 1;
			i++;
			j++;
		}
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (found);
}

void	ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int alert;

	i = 1;
	alert = 0;
	while (i < argc)
		ft_strlowercase(argv[i++]);
	i = 0;
	while (i < argc)
	{
		if (ft_strstr(argv[i], "president") == 1
				|| ft_strstr(argv[i], "attack") == 1
				|| ft_strstr(argv[i], "powers") == 1)
			alert = 1;
		i++;
	}
	if (alert == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}
