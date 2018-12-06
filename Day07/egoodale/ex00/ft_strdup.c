/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 22:02:51 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/18 23:41:06 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	index = 0;
	while (*src)
		*(dest + index++) = *src++;
	*(dest + index) = '\0';
	return (dest);
}
