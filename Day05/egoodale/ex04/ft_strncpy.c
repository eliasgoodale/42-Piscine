/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:16:06 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/16 22:33:30 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*cpy;

	i = 0;
	cpy = dest;
	while (*(src + i) && i < n)
	{
		*(cpy + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(cpy + i) = '\0';
		i++;
	}
	return (cpy);
}
