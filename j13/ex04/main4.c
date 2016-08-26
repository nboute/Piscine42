/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdestrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:23:04 by vdestrai          #+#    #+#             */
/*   Updated: 2016/08/22 17:02:24 by vdestrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_btree.h"

void	ft_print(void *data)
{
	printf("%s\n", data);
}

int		ft_cmp(void *str1, void *str2)
{
	return (strcmp((char*)str1, (char*)str2));
}

int		main(int argc, char **argv)
{
	t_btree		*root;

	(void)argc;
	(void)argv;
	root = btree_create_node("Root");
	root->left = btree_create_node("Left");
	root->left->left = btree_create_node("LEFT");
	root->left->right = btree_create_node("Left_right");
	root->right = btree_create_node("right");
	root->right->left = btree_create_node("righT");
	root->right->right = btree_create_node("right_right");

	btree_apply_infix(root, &ft_print);
	btree_insert_data(&root, "machin truc", &ft_cmp);
	printf("\n");
	btree_apply_infix(root, &ft_print);

	return (0);
}
