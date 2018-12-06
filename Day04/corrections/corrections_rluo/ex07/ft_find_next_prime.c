/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 22:35:54 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/13 22:56:09 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int factor;
	int half;

	if (nb <= 0 || nb == 1 || nb == 4)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	half = nb / 2;
	factor = 3;
	while (factor < half)
	{
		if (nb % factor == 0)
		{
			return (0);
		}
		factor += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_prime;

	if (nb <= 0)
	{
		return (2);
	}
	if (nb == 1 || nb == 2)
	{
		return (2);
	}
	next_prime = nb;
	if (next_prime % 2 == 0)
	{
		next_prime += 1;
	}
	while (!ft_is_prime(next_prime))
	{
		next_prime += 2;
	}
	return (next_prime);
}
