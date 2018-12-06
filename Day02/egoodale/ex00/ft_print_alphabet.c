/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:51:01 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 10:05:53 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char glyph);

void	ft_print_alphabet(void)
{
	char start;

	start = 'a';
	while (start < 'z' + 1)
	{
		ft_putchar(start);
		start += 1;
	}
}
