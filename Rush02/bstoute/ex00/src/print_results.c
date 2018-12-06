/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 02:50:13 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 02:57:10 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"

void	print_results(int rush, int width, int height)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putstr("]");
}
