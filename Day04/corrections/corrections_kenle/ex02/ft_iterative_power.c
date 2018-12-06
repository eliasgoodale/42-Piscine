/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:39:35 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/13 17:42:51 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int num_to_power;

	num_to_power = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		num_to_power *= nb;
		power--;
	}
	return (num_to_power);
}

int main()
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-1, -1));
	printf("%d\n", ft_iterative_power(10, 100));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(4, 1));
	
	return(0);
}