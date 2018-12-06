/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:12:47 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 23:13:46 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *tmp;

	current = *begin_list;
	tmp = 0;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*begin_list = 0;
}
