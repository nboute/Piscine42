/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:17:52 by nboute            #+#    #+#             */
/*   Updated: 2016/08/12 13:37:00 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		j = i;
		if (*tab[i] == '\0')
		{
			while (j < length - 1)
			{
				tab[j] = tab[j + 1];
				j++;
			}
			tab[j] = (void*)(0);
			length--;
		}
		i++;
	}
	return (length);
}
