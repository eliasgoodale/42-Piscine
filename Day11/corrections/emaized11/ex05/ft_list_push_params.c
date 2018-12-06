/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 10:39:34 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 22:08:33 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	t_list	*tmp;
	int		i;

	i = 0;
	node = 0;
	while (++i < ac)
	{
		tmp = ft_create_elem(*(av + i));
		tmp->next = node;
		node = tmp;
	}
	return (node);
}
