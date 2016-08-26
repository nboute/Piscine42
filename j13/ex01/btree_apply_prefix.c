/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:30:20 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 22:21:20 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree *rope;

	if (root)
	{
		rope = root;
		applyf(rope->item);
		if (rope->left)
			btree_apply_prefix(rope->left, applyf);
		if (rope->right)
			btree_apply_prefix(rope->right, applyf);
	}
}
