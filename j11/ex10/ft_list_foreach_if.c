/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:16:32 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 13:25:17 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *)
		, void *data_ref, int (*cmp)())
{
	t_list *elem;

	elem = begin_list;
	while (elem)
	{
		if (!cmp(elem->data, data_ref))
			f(elem->data);
		elem = elem->next;
	}
}
