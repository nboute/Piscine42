/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:29:00 by nboute            #+#    #+#             */
/*   Updated: 2016/08/22 23:55:26 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int l;
	int r;
	int max;

	if (!root)
		return (0);
	else
	{
		l = btree_level_count(root->left);
		r = btree_level_count(root->right);
		max = (l > r) ? l : r;
		return (1 + max);
	}
}
