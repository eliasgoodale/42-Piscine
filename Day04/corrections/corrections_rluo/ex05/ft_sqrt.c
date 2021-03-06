/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:20:02 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/14 14:26:38 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (result <= nb)
	{
		if (result == nb)
		{
			return (i);
		}
		i++;
		result = i * i;
	}
	return (0);
}
