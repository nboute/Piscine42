/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:06:50 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 23:38:47 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *elem_list1;
	t_list *elem_list2;

	if (!*begin_list1 && begin_list2)
		*begin_list1 = begin_list2;
	else if (!*begin_list1 && !begin_list2)
		return ;
	else if (begin_list2 && *begin_list1)
	{
		elem_list1 = *begin_list1;
		elem_list2 = begin_list2;
		while (elem_list1->next)
			elem_list1 = elem_list1->next;
		while (elem_list2)
		{
			elem_list1->next = elem_list2;
			elem_list2 = (elem_list2->next) ? elem_list2->next : 0;
			elem_list1 = elem_list1->next;
		}
	}
}
