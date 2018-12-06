/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_by_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:16:51 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 16:46:03 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void		msg_div_by_zero(char c)
{
	if (c == '/')
		ft_putstr("Stop : division by zero\n");
	if (c == '%')
		ft_putstr("Stop : modulo by zero\n");
}
