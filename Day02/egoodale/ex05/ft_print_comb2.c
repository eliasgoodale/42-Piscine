/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:29:11 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/11 10:33:52 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char glyph);

void	ft_print_comb2(void)
{
	int count;
	int start;

	count = -1;
	start = 1;
	while (count++ < 10000)
	{
		if ((count / 100) < (count % 100))
		{
			if (start)
			{
				start = 0;
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(((count / 100) / 10) + '0');
			ft_putchar(((count / 100) % 10) + '0');
			ft_putchar(' ');
			ft_putchar(((count % 100) / 10) + '0');
			ft_putchar(((count % 100) % 10) + '0');
		}
	}
}
