/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:34:13 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/13 20:41:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (nb < 0 || power < 0)
	{
		return (0);
	}
	else if (nb == 1 || power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (nb);
}
