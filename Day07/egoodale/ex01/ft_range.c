/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 22:11:00 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/17 22:23:37 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, in max)
{
	int *arr;
	
	arr = malloc((max - min) * (sizeof(int)));
	while(min < max)
	{
		*arr = min;
		min++;
	}
	return (arr);
}
