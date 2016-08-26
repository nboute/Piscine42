/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:12:59 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 14:57:04 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *elem;
	t_list *tmp;
	t_list *tmp2;

	elem = *begin_list;
	if (!elem || !elem->next)
		return ;
	tmp = elem->next;
	tmp2 = tmp->next;
	elem->next = 0;
	tmp->next = elem;
	while (tmp2)
	{
		elem = tmp2;
		tmp2 = tmp2->next;
		elem->next = tmp;
		tmp = elem;
	}
	*begin_list = elem;
}
