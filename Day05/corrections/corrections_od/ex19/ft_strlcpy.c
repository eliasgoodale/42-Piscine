/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:05:39 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/16 23:34:42 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int        ft_strlcpy(char *dest, char *src, unsigned int size)
{
      unsigned    int i; 
	  unsigned    int j;

     i = 0;
	 while (dest[i])
     
     j = 0;
     while (src[j] != '\0' && j < size)
      {
          dest[i + j] = src[j];
          j++;
      }
      dest[i + j] = '\0';
      i = 0;
      while (src[i])
          i++;
      return (i);
 }
