/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 02:50:23 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 12:50:41 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"

void	print_rush(int res, int *width, int *height)
{
	if (res < 6)
		print_results(res, *width, *height);
	else if (res == 6 || res == 7)
	{
		print_results(res - 4, *width, *height);
		write(1, " || ", 4);
		print_results(res - (res - 4), *width, *height);
	}
	else if (res == 9)
	{
		print_results(2, *width, *height);
		write(1, " || ", 4);
		print_results(3, *width, *height);
		write(1, " || ", 4);
		print_results(4, *width, *height);
	}
	ft_putchar('\n');
	return ;
}
