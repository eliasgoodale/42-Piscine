/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 14:43:00 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 19:27:26 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define WHITE_SPACE(c) ((c >= 9 && c <= 13) || c == 32)

int		count_words(char *str)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (WHITE_SPACE(str[i]))
		i++;
	if (!(*str))
		return (0);
	while (str[i])
	{
		if (WHITE_SPACE(str[i]))
		{
			words++;
			while (WHITE_SPACE(str[i]) && str[i + 1])
				i++;
		}
		i++;
	}
	return (!(WHITE_SPACE(str[i - 1])) ? (words + 1) : words);
}

int		trim_whitespace(char *str, int pos)
{
	while (WHITE_SPACE(str[pos]))
		pos++;
	return (pos);
}

void	alloc_words(char **arr, char *adj_str, int *ltrs, int *c_word)
{
	int		j;
	int		l;
	int		cw;

	cw = *c_word;
	l = *ltrs;
	arr[cw] = (char*)malloc((l + 1) * sizeof(char));
	j = 0;
	while (l > 0)
	{
		arr[cw][j] = adj_str[j];
		j++;
		l--;
	}
	arr[cw][j] = '\0';
	cw++;
	l = 0;
	*c_word = cw;
	*ltrs = l;
}

char	**ft_split_whitespaces(char *str)
{
	int		pos;
	int		words;
	int		ltrs;
	char	**arr;
	int		c_word;

	words = count_words(str);
	arr = (char**)malloc((words + 1) * sizeof(char*));
	c_word = 0;
	ltrs = 0;
	pos = 0;
	pos = trim_whitespace(&str[pos], pos);
	while (c_word < words)
	{
		if (WHITE_SPACE(str[pos]) || str[pos] == '\0')
		{
			alloc_words(arr, &str[pos - ltrs], &ltrs, &c_word);
			pos = trim_whitespace(str, pos);
		}
		ltrs++;
		pos++;
	}
	arr[words] = 0;
	return (arr);
}


int main()
{
	char *s = "Hello How are YOUUUU";

	char **sarr = ft_split_whitespaces(s);


	int stop= 1;
}



















	
