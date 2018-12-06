/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:24:00 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 15:32:50 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_LIST_H
#	define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;

}					t_list;

t_list				*ft_create_elem(void *data);

#	endif
