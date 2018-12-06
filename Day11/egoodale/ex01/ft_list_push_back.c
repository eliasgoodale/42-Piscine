/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:40:29 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 21:51:23 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	int		i;
	t_list	*tmp;

	if(begin_list == 0)
		*begin_list = ft_create_elem(data);
	tmp = *begin_list;
	while(tmp -> next)
		tmp = tmp -> next;
	tmp -> next = data;
}
