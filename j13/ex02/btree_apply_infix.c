/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:45:41 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 23:53:09 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree *rope;

	if (root)
	{
		rope = root;
		if (rope->left)
			btree_apply_infix(rope->left, applyf);
		applyf(rope->item);
		if (rope->right)
			btree_apply_infix(rope->right, applyf);
	}
}
