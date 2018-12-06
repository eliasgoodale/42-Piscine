/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:19:15 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 10:21:07 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char glyph);

void	ft_print_numbers(void)
{
	char start;

	start = '0';
	while (start < '9' + 1)
	{
		ft_putchar(start);
		start += 1;
	}
}
