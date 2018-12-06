/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:44:06 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/14 10:39:21 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb > 12)
	{
		return (0);
	}
	return (nb > 1 ? nb * ft_recursive_factorial(nb - 1) : 0);
}

int main ()
{
	int int1 = ft_recursive_factorial(0);
	int int2 = ft_recursive_factorial(-1);
	int int3 = ft_recursive_factorial(3);

	int stop = 1;
}
