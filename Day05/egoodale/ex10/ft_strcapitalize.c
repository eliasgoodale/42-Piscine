/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:19:17 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/16 21:27:47 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int		not_alphanum(char c)
{
	if (is_upper(c) || is_lower(c) || is_num(c))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		past_not_alphanum;
	int		index;

	index = 0;
	while (*(str + index))
	{
		past_not_alphanum = not_alphanum(*(str + index - 1));
		if (index == 0 && is_lower(*(str + index)))
			*(str + index) -= 32;
		else if (past_not_alphanum && is_lower(*(str + index)))
			*(str + index) -= 32;
		else if (past_not_alphanum == 0 && is_upper(*(str + index)))
			*(str + index) += 32;
		index += 1;
	}
	return (str);
}
