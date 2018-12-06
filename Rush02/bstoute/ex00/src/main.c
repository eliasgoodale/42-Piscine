/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:27:21 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 16:42:28 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_two.h"

int main(void)
{
	int total_len = 0;
	char buf[BUF_SIZE + 1];
	int height = 0;
	int width = 0;
	int ret;

	while((ret = read(0, buf, BUF_SIZE)))
		buf[ret] = '\0';
	get_dimensions(buf, &width, &height, &total_len);
}
