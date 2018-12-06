/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Eval_Ex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:32:29 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 19:49:56 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef EVAL_EX_H
#	define EVAL_EX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;

}					t_list;

t_list				*create_elem(char *data);

//int			count_words(char *str);

//int			trim_whitespace(char *str, int pos);

//void		alloc_words(char **arr, char *adj_str, int *ltrs, int *cword);

//char		**ft_split_whitespaces(char *str);


#	endif
