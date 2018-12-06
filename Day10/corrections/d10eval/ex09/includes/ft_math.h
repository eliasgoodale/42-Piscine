/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:08:43 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 20:20:36 by egoodale         ###   ########.fr       */
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

int				ft_atoi(char *str);

int				ft_add(int a, int b);

int				ft_sub(int a, int b);

int				ft_mul(int a, int b);

int				ft_div(int a, int b);

int				ft_mod(int a, int b);

int				ft_usage(int a, int b);

void			ft_putnbr(int num);

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			msg_div_by_zero(char c);

#	endif
