/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   super_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 17:43:24 by nboute            #+#    #+#             */
/*   Updated: 2016/08/20 17:55:04 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_super_bonus(char *str, int len, int rows)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	while (str[i])
	{
		x = (i - j) / j;
		if ((i - j) >= len * j)
			return (0);
		if ((x == 0 || x == len - 1 || j == 0 || j == rows - 1)
				&& str[i] != ' ')
			return (0);
		
		if (str[i] == '\n')
			j++;
		if (str[i] == '\n')
			i++;
		i++;
	}
	return (0);
}
