/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 22:35:10 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/26 23:23:26 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*curr_node;

	curr_node = *root;
	if (!root)
		return ;
	if (cmpf(item, curr_node->item) >= 0)
	{
		if (curr_node->right)
			btree_insert_data(&(curr_node->right), item, cmpf);
		else
			node->right = btree_create_node(item);
	}
	else if (cmpf(item, curr_node->item) < 0)
	{
		if (curr_node->left)
			btree_insert_data(&(curr_node->left), item, cmpf);
		else
			curr_node->left = btree_create_node(item);
	}
}
