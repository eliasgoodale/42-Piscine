/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:48:52 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/24 13:13:11 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*cpy;
	int		i;

	i = -1;
	cpy = (int*)malloc(sizeof(int) * length);
	while (++i < length)
	{
		cpy[i] = f(tab[i]);
	}
	return (cpy);
}
