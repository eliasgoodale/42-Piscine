/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 22:19:43 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 23:38:54 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*curr_node;
	void	*temp_data;

	tmp = 0;
	curr_node = *begin_list;
	if (*begin_list == 0 || (*begin_list)->next == 0)
		return ;
	if (!curr_node->next)
		return ;
	while (curr_node->next)
	{
		if (cmp(curr_node->data, curr_node->next->data) > 0)
		{
			temp_data = curr_node->data;
			curr_node->data = curr_node->next->data;
			curr_node->next->data = temp_data;
			curr_node = *begin_list;
		}
		else
			curr_node = curr_node->next;
	}
}
