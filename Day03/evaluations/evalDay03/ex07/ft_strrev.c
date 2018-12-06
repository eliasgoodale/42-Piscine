/*
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/15 15:14:38 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/15 17:27:15 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	char	temp;

	count = 0;
	size = 0;
	while (str[size])
		size++;
	
	size -= 1;
	while (count < size)
	{
		temp = str[size];
		str[size] = str[count];
		str[count] = temp;
		count++;
		size--;
	}
	return (str);
}	
