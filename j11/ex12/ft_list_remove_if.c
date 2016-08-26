/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 13:23:34 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 21:23:54 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_recreate_links(t_list *begin_list, t_list *next)
{
	t_list *elem;

	elem = begin_list;
	if (!begin_list)
		begin_list = next;
	else
	{
		while (elem && elem->next)
			elem = elem->next;
		elem->next = next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *elem;
	t_list *tmp;

	if (!begin_list || !*begin_list || !data_ref)
		return ;
	elem = *begin_list;
	while (elem)
	{
		if (!cmp(elem->data, data_ref))
		{
			tmp->next = 0;
			tmp = elem;
			if (elem->next)
				elem = elem->next;
			else
				elem = 0;
			free(tmp);
			ft_recreate_links(*begin_list, elem);
		}
		else
		{
			tmp = elem;
			elem = (elem->next) ? elem->next : 0;
		}
	}
}
