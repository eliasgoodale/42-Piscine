/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 23:42:31 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/18 15:16:51 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int  ft_arg_strlen(int argc, char **argv)
{
	int i;
	int j;
	int count;

	count = 0;
	i = 1;
	j = 0;
	while(i < argc)
	{	
		j = 0;
		while(argv[i][j])
			j++;
		count += j;
		i++;
	}
	return(count);
}

void	write_buffer(int argc, char **argv, char *params, int size)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 1;
	x = 0;
	while(i < size)
	{	
		while (j < argc)
		{
			while(argv[j][x])
			{
				params[i] = argv[j][x];
				x++;
				i++;
			}
			params[i] = '\n';
			i++;
			j++;
			x = 0;
		}
	}
	params[i] = '\0';
}



char *ft_concat_params(int argc, char **argv)
{
	int size;
	char *params;
	
	size = ft_arg_strlen(argc, argv);
	params = (char*)malloc(sizeof(char) * (size + argc -1));
	write_buffer(argc, argv, params, size);
	return (params);
}












