/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:26:44 by nboute            #+#    #+#             */
/*   Updated: 2016/08/18 10:29:17 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *branch;

	branch = (t_btree*)malloc(sizeof(t_btree));
	if (branch == 0)
		return (0);
	branch->left = 0;
	branch->right = 0;
	branch->item = item;
	return (branch);
}
