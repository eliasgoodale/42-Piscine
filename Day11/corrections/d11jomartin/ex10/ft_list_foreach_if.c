/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 20:04:11 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 22:16:08 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(
		t_list *begin_list,
		void (*f)(void*),
		void *data_ref,
		int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
			f(tmp->data);
		tmp = tmp->next;
	}
}
