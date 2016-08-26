/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:42:36 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 10:38:40 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *elem;
	t_list *next_elem;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		elem = *begin_list;
		next_elem = elem->next;
		while (cmp(next_elem->data, data) < 0 && next_elem->next)
		{
			elem = elem->next;
			next_elem = elem->next;
		}
		elem->next = ft_create_elem(data);
		elem = elem->next;
		if (next_elem->next)
			elem->next = next_elem;
	}
}
