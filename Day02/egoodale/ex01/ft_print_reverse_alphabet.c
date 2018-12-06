/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:07:07 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 10:18:31 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char glyph);

void	ft_print_alphabet(void)
{
	char start;

	start = 'z';
	while (start > 'a' - 1)
	{
		ft_putchar(start);
		start -= 1;
	}
}
