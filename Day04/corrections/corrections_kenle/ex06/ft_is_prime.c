/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 21:10:05 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/13 21:13:42 by egoodale         ###   ########.fr       */
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
