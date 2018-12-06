/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:34:18 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/22 16:43:46 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ex00/match.c"
int        main(void)
{
    printf("'main.c' and '*.c' should match: %d\n", match("main.c", "*.c"));
    printf("'testing' and 'test*' should match: %d\n", match("testing", "test*"));
    printf("'testing1' and 'testing2' should not match: %d\n", match("testing1", "testing2"));
    printf("'test' and 'tes*t' should match: %d\n", match("test", "tes*t"));
    printf("'test1' and 'tes*t' should not match: %d\n", match("test1", "tes*t"));
    printf("'Hello' and '***el' should not match: %d\n", match("Hello", "***el"));
    printf("'Hello' and '***el*' should match: %d\n", match("Hello", "***el*"));
    printf("'' and '*' should match: %d\n", match("", "*"));
    printf("'Hel*llo' and 'He*l*' should match: %d\n", match("Hel*llo", "He*l*"));
    printf("'' and 'a' should not match: %d\n", match("", "a"));
}
