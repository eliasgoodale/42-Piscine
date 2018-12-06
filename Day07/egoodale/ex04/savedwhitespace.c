/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:15:35 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/19 01:08:23 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
	int words;
	int i;
	
	i = 0;
	words = 0;	
	while (str[i] == ' ')
		i++;
	while(str[i])
	{
		if(str[i] == ' ')
		{
			words++;
			while(str[i] == ' ')
				i++;		
		}
		i++;
	}
	return(words + 1);
}

void alloc_words(char** arr, char *adj_str, int letters,int  curr_word)
{
	int j;
	

	arr[curr_word] =(char*)malloc((letters + 1)  * sizeof(char));
	j = 0;
	while(letters > 0)
	{ 
		arr[curr_word][j] = adj_str[j];	
		j++;
		letters--;
	}
	arr[curr_word][j] = '\0';

}

char	**ft_split_whitespaces(char *str)
{
	int letter_start;
	//int j;
	int pos;
	int words;
	int letters;
	char **arr;
	int curr_word;

	words = count_words(str);
	arr = (char**)malloc(words * sizeof(char*));
	curr_word = 0;
	letters = 0;
	pos = 0;
	while(str[pos] == ' ')
		pos++;	
	while(curr_word <  words)
		{ 
			if(str[pos] == ' ' || str[pos] == '\0')
			{
				arr[curr_word] =(char*)malloc((letters + 1)  * sizeof(char));
				
				letter_start = pos - letters;
				alloc_words(arr, &str[pos], letters, curr_word);  
				curr_word++;
				letters = 0;
				while(str[pos] == ' ')
					pos++;	
			}
			else
			{
				letters++;
				pos++;
			}
		}    
	return(arr);
}
int main()
{
	char string[13] = "How Do Print";

	char **strarr = ft_split_whitespaces(string);
	printf("%p", strarr);
}









