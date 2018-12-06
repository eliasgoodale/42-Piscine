/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 23:19:47 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/12 23:21:30 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		end_index;
	int		start_index;

	end_index = 0;
	start_index = 0;
	while (str[end_index] != '\0')
	{
		end_index++;
	}
	end_index -= 1;
	while (start_index < end_index)
	{
		tmp = str[end_index];
		str[end_index] = str[start_index];
		str[start_index] = tmp;
		start_index++;
		end_index--;
	}
	return (str);
}
