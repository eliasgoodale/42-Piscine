/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 19:05:37 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 19:57:46 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Eval_Ex.h"
#include <stdio.h>
#define DIV_PROD(x) (x == '*' || x == '%' || x == '/' ? 1 : 0)

#include <stdlib.h>

#define WHITE_SPACE(c) ((c >= 9 && c <= 13) || c == 32)


int             count_words(char *str)
{
        int             words;
        int             i;

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

int             trim_whitespace(char *str, int pos)
{
        while (WHITE_SPACE(str[pos]))
                pos++;
        return (pos);
}

void    alloc_words(char **arr, char *adj_str, int *ltrs, int *c_word)
{
        int             j;
        int             l;
        int             cw;

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

char    **ft_split_whitespaces(char *str)
{
        int             pos;
        int             words;
        int             ltrs;
        char    **arr;
        int             c_word;

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

t_list          *create_elem(char* data)
{
        t_list  *new_node;
        new_node = (t_list*)malloc(sizeof(*new_node));
        new_node->data = data;
        new_node->next = NULL;
        return (new_node);
}

t_list  *eval_expr(char *av)
{
        int             i;
        t_list *expr_head;
        t_list *curr_node;
		char **split_av; 

		split_av = ft_split_whitespaces(av);
        i = 1;
        expr_head = create_elem(split_av[0]);
		curr_node = expr_head;
        printf("data : %s\n", curr_node->data);
        while(split_av[i])
        {
           curr_node->next = create_elem(split_av[i]);
           curr_node = curr_node->next;	
           printf("head_data : %s\n", curr_node->data);
		   i++;
        }
        curr_node->next = expr_head;
        printf("\n%s\n", curr_node->next->data);
        return(expr_head);
}

int main()
{
        /*char * f = "1";
        char * s = "2";
        char * t = "3";

        t_list  *expr_head;
        expr_head = create_elem(f);
        expr_head->next = create_elem(s);
        expr_head->next->next = create_elem(t);
        */

        char *input = "3 + 42 * |1 - 2 / (4 + 9) - 1 % 29| + 1";
        t_list *expr_head;
        expr_head = eval_expr(input);
        //parent_ops(expr_head);
//      printf("data1 :  %c\ndata2 :  %c\ndata3 :  %c\n", expr_head->data, expr_head->next->data, expr_head->next->next->data);

 }
