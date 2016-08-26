/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find..h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:20:15 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 18:24:02 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *elem;

	if (!begin_list)
		return (0);
	elem = begin_list;
	while (cmp(elem->data, data_ref) && elem->next)
	{
		elem = elem->next;
	}
	if (elem && cmp(elem->data, data_ref) == 0)
		return (elem);
	return (0);
}
