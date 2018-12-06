/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:08:43 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 17:15:26 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_MATH_H
#	define FT_MATH_H

#include <unistd.h>

typedef int		(*t_s_opp)(int, int);

typedef struct	s_opp
{
	char	*c;
	t_s_opp	func;
}				t_opp;

int				do_math(char c, int a, int b);

int				ft_atoi(char *str);

int				ft_add(int a, int b);

int				ft_subtract(int a, int b);

int				ft_multiply(int a, int b);

int				ft_divide(int a, int b);

int				ft_modulo(int a, int b);

void			ft_putnbr(int num);

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			msg_div_by_zero(char c);

#	endif
