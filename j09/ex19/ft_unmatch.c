/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:10:34 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 16:19:07 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int ismatching;

	i = 0;
	while (i < length)
	{
		ismatching = 0;
		j = 0;
		while (j < length)
		{
			if (j != i && tab[i] == tab[j])
				ismatching = 1;
			j++;
		}
		if (ismatching == 0)
			return (i);
		i++;
	}
}
