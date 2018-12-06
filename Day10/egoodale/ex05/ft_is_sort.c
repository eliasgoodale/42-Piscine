/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 18:44:27 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/23 18:56:23 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS_V(x) (x < 0 ? -x : x)

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int				i;
	long long int	count;
	long long int	prevcount;

	prevcount = 0;
	count = 0;
	i = 0;
	while (i < length - 1)
	{
		prevcount = ABS_V(count);
		count += f(tab[i], tab[i + 1]);
		if (ABS_V(count) < prevcount)
			return (0);
		i++;
	}
	return (1);
}
