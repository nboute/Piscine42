/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:56:33 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 10:51:55 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_cmp(t_list *begin_list2, t_list *elem, t_list *next_elem
			, int (*cmp)())
{
	while (cmp(begin_list2->data, next_elem->data) < 0 && next_elem)
	{
		elem = (elem->next) ? elem->next : 0;
		next_elem = (elem) ? elem : 0;
		if (next_elem && next_elem->next)
			next_elem = next_elem->next;
	}
}

void	ft_reassign_pointers(t_list **begin_list1, t_list *begin_list2
			, int (*cmp)(), t_list *elem)
{
	t_list *next_elem;
	t_list *tmp;

	next_elem = (elem->next) ? elem->next : 0;
	tmp = begin_list2;
	begin_list2 = (begin_list2->next) ? begin_list2->next : 0;
	if (cmp((*begin_list1)->data, tmp->data) >= 0)
		tmp->next = *begin_list1;
	if (cmp((*begin_list1)->data, tmp->data) >= 0)
		*begin_list1 = tmp;
	else
	{
		elem->next = tmp;
		tmp->next = next_elem;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2
			, int (*cmp)())
{
	t_list *elem;
	t_list *next_elem;

	if (!*begin_list1 && begin_list2)
	{
		*begin_list1 = begin_list2;
		begin_list2 = (begin_list2->next) ? begin_list2->next : 0;
		(*begin_list1)->next = 0;
	}
	while (begin_list2)
	{
		elem = *begin_list1;
		next_elem = (elem->next) ? elem->next : 0;
		ft_list_cmp(begin_list2, elem, next_elem, cmp);
		ft_reassign_pointers(begin_list1, begin_list2, cmp, elem);
	}
}
