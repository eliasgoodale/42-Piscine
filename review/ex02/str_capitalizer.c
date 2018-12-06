/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 18:01:55 by egoodale          #+#    #+#             */
/*   Updated: 2018/02/01 18:36:08 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *capital(char *str)
{
	int i;

	i = -1;	
	while(str[++i])
	{	
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] < 33)
		{	
			str[i] -=32;
			i++;
		}
		while(str[i] > 33)
		{
			if(str[i] >= 'A' && str[i] <= 'Z' && !(str[i-1] < 33))
			{
				str[i] += 32;
			}
			i++;
		}
	}
	return(str);
}

	
	
		





int main(int argc, char **argv)
{
	char *capd = capital(argv[1]);
	
	int i;
	
	i = -1;
	while(capd[++i])
		write(1, &capd[i], 1);
	
	write(1,"\n",1);

	return (0);
}



















