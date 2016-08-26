/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:49:02 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 23:53:24 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree *rope;

	if (root)
	{
		rope = root;
		if (rope->left)
			btree_apply_suffix(rope->left, applyf);
		if (rope->right)
			btree_apply_suffix(rope->right, applyf);
		applyf(rope->item);
	}
}
