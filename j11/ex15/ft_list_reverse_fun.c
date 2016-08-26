/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:31:54 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 17:39:31 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *elem;
	t_list *tmp;
	t_list *tmp2;

	elem = begin_list;
	if (!begin_list)
		return ;
	if (!begin_list->next)
		return ;
	tmp = elem->next;
	tmp2 = tmp->next;
	elem->next = 0;
	tmp->next = elem;
	while (tmp2)
	{
		elem = tmp2;
		tmp2 = (tmp2->next) ? tmp2->next : 0;
		elem->next = tmp;
		tmp = elem;
	}
	begin_list = elem;
}
