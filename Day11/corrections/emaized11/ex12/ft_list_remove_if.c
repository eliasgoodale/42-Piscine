/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 20:30:56 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 21:13:46 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*temp;
	t_list		*current;

	if (!*begin_list)
		return ;
	current = *begin_list;
	while (current->next)
	{
		if (cmp(current->next->data, data_ref) == 0)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
		}
		current = current->next;
	}
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}
}
