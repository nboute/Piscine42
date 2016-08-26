/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:12:12 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 10:59:39 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		ordered;
	t_list	*elem;
	t_list	*next;
	void	*tmp;

	ordered = 1;
	if (*begin_list)
		while (ordered)
		{
			ordered = 0;
			elem = *begin_list;
			next = elem->next;
			while (elem->next)
			{
				if (cmp(elem->data, next->data) > 0)
				{
					tmp = elem->data;
					elem->data = next->data;
					next->data = tmp;
					ordered = 1;
				}
				elem = elem->next;
				next = (elem->next) ? elem->next : 0;
			}
		}
}
