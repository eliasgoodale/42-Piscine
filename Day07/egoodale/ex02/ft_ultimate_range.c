/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 22:23:56 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/17 23:40:34 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	arr = (int*)malloc((min - max) * sizeof(int));
	i = 0;
	while (m < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
