/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:18:06 by nboute            #+#    #+#             */
/*   Updated: 2016/08/21 23:37:46 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;
	t_list *tmp;

	if (!*begin_list)
		return ;
	elem = *begin_list;
	while (elem)
	{
		if (elem->next)
			tmp = elem->next;
		else
			tmp = 0;
		free(elem);
		elem = tmp;
	}
	*begin_list = 0;
}
