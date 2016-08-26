/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:24:07 by nboute            #+#    #+#             */
/*   Updated: 2016/08/23 17:23:34 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref
		, int (*cmpf)(void *, void *))
{
	void *tmp;

	tmp = 0;
	if (root)
	{
		tmp = btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(data_ref, root->item) == 0 && !tmp)
			return (root->item);
		if (!tmp)
			tmp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (tmp);
}
