/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:22 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 09:50:11 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char glyph);

void	ft_print_comb(void)
{
	char o;
	char t;
	char h;

	h = -1;
	while (++h <= 9)
	{
		t = -1;
		while (++t <= 9)
		{
			o = -1;
			while (++o <= 9)
			{
				if (h < t && t < o)
				{
					ft_putchar(h + '0');
					ft_putchar(t + '0');
					ft_putchar(o + '0');
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
