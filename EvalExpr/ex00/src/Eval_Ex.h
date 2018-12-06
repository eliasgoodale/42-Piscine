/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Eval_Ex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:32:29 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 19:26:19 by egoodale         ###   ########.fr       */
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
	char			 *data;

}					t_list;

typedef	t_f_math	int (*f)(int, int);

typedef struct	s_opp
{
	char *op_num;
	t_f_math func;
}				t_s_opp;

t_s_opp  g_opp_parser[]
{
	{"*", &mult},
	{"/", &div},
	{"%", &mod},
	{"-", &sub},
	{"+", &add}
};

int	add(int a, int b);

int	div(int a, int b);

int	mod(int a, int b);

int	sub(int a, int b);

int	mult(int a, int b);
t_list				*create_elem(char *data);

#	endif
