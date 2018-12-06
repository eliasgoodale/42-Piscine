/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 21:06:33 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/01 22:31:35 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
	
						



int is_prime(int nb)
{
	int i;
	int count;

	i = 1;
	if (nb == 2 || nb == 3)
		return (nb);
	while(i <= nb / 2)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int		add_prime_sum(int nb)
{
	int div = 2;
	int res = 0;

	while(div <= nb)
	{
		if(is_prime(nb))
			res += div;
		div++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	int i = 0;
	int num = 0;

	while(argv[1][i] >= '0' &&	argv[1][i] <= '9')
	{
		num = num * 10 + argv[1][i] - '0';
		i++;
	}

	int div = add_prime_sum(num);
	printf("%d", div);
}
