/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 14:13:47 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/31 17:25:12 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int             ft_atoi(char *str)
{
        int sign;
        int num;

        sign = 1;
        num = 0;
        while (*str < 33)
                str++;
        if (*str == '+')
        {
                str++;
                if (!(*str >= '0' && *str <= '9'))
                        return (0);
        }
        if (*str == '-')
        {
                sign = -1;
                str++;
        }
        while ((*str <= '9' && *str >= '0'))
        {
                num = num * 10 + *str - '0';
                str++;
        }
        return (sign * num);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
