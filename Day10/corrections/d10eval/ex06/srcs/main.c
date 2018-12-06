/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:34:52 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 17:16:27 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = -1;
	if ((c == '/' || c == '%') && (ft_atoi(argv[3]) == 0))
	{
		msg_div_by_zero(c);
		return (0);
	}
	while (++i < 5)
	{
		if (*g_opptab[i].c == c)
		{
			ft_putnbr(g_opptab[i].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
