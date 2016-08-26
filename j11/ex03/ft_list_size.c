/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 18:49:10 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 17:47:11 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*iterator;

	i = 0;
	iterator = begin_list;
	while (iterator)
	{
		iterator = iterator->next;
		i++;
	}
	return (i);
}
