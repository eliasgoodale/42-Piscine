/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:15:55 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/26 11:21:15 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_BTREE_H
#	define FT_BTREE_H

typedef	struct		s_btree
{
	struct s_btree	*left;
	struct s_betree	*right;
	void			*item;
}					t_btree;

#	endif
