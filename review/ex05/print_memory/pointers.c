/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 19:10:03 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/01 20:25:08 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	//char *str1 = "Hello";
	//char *str2 = "World!";
	
	/*char *result = (char *)malloc(strlen(str1));

	while((*result = *str1))
	{
		if(*str1 == 'e')
		{
			*result = 'a';
		}
		str1++;
		result++;
	}
	printf("str1 :  %s, result: %s\n", str1 - 4, result - 4);
	printf("str1 :  %p, result: %p\n", str1 - 4, result - 4);
	printf("str1 :  %c, result: %c\n", *(str1 - 1), *(result - 1));*/




	/*char first;
	char *ptr_first;
	char **evil;
	char ***what;*/

	/*first = 'A';
	ptr_first = &first;
	evil = &ptr_first;
	what = &evil;
	printf("%c\n", first);	
	printf("first :  %p, ptr_first:  %p, evil: %c\n", &first, ptr_first, **evil);
	printf("%c\n",***what);*/


	char arr[2][3] = { {'1','2','3'}, {'4', '5', '6'} };

	printf("*(arr[0] + 1) =  %c\n", *(arr[0] + 2));
	printf("arr[0][1] = %c\n", arr[1][0]);
}
