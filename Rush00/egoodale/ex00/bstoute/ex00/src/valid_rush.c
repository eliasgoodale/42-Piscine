/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaguna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:05:18 by jdaguna           #+#    #+#             */
/*   Updated: 2018/01/28 20:14:34 by jdaguna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"

int		check_a(char *input, int i, int len)
{
	if (input[len] == 'A' || input[len] == 'C')
	{
		write(1, &len, 1);
		while (i < len)
		{
			if (input[i] != 'B')
			{
				return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int		check_o(char *input, int i, int len)
{
	if (input[len] == 'o')
	{
		write(1, &len, 1);
		while (i < len)
		{
			if (input[i] != '-')
			{
				return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int		check_1(char *input, int i, int len)
{
	if (input[len] == '\\')
	{
		write(1, &len, 1);
		while (i < len)
		{
			if (input[i] != '*')
			{
				return (0);
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int		valid_rush(char *input)
{
	int i;
	int len;

	i = 1;
	if ((input[0] != 'o') && (input[0] != '/') && (input[0] != 'A'))
		return (0);
	while (input[i] != '\n')
	{
		i++;
	}
	len = --i;
	i = 1;
	if (input[0] == 'A')
		return (check_a(input, i, len));
	if (input[0] == 'o')
		return (check_o(input, i, len));
	if (input[0] == '/')
		return (check_1(input, i, len));
	return (1);
}
