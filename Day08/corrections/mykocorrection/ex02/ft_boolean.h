/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 23:03:12 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/19 23:38:14 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_BOOLEAN_H
#	define FT_BOOLEAN_H
#	define ODD_MSG "I have an even number of arguments.\n"
#	define EVEN_MSG "I have an odd number of arguments.\n"
#	define SUCCESS 1
#	define TRUE 1
#	define FALSE 0
#	include <unistd.h>
#	define EVEN(x) (x % 2 ? TRUE : FALSE)

typedef int		t_bool;
#	endif
