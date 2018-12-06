/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egoodale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 14:30:38 by egoodale          #+#    #+#             */
/*   Updated: 2018/01/28 19:04:50 by egoodale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Eval_Ex.h"
#include <stdio.h>
#define WHITE_S(x) (x == ' ' ? 1 : 0)
#define DIV_PROD(x) (x == '*' || x == '%' || x == '/' ? 1 : 0)
t_list		*create_elem(int data)
{
	t_list	*new_node;

	new_node = (t_list*)malloc(sizeof(*new_node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

t_list	*eval_expr(char *av)
{
	int		i;
	t_list *expr_head;
	t_list *curr_node;
	
	
	expr_head = create_elem(av[0]);
	curr_node = expr_head;
	i = 1;
	printf("data : %c\n", curr_node->data);
	while(av[i])
	{
		if(!WHITE_S(av[i]))
		{
			curr_node->next = create_elem(av[i]);
			curr_node = curr_node->next;
			printf("head_data : %c\n", curr_node->data);
		}
		i++;
	}
	 curr_node->next = expr_head;
	printf("\n%c\n", curr_node->next->data);
	return(expr_head);
}

t_list		*parent_ops(t_list *orig_head)
{
	t_list	*last_head;
	
	last_head = orig_head;
	while(last_head->data != ')')
	{
		if(last_head->data == '(' || last_head->data == '|')
		{
			last_head = last_head->next;
			//printf("within if: %c\n", temp_head->data);
			last_head = parent_ops(last_head);
		 

		}
		
		last_head = last_head->next;
	}
	last_head = last_head->next;
	last_head = do_math(last_head, orig_head);
	printf("\norig_head:  %c : linked to %c\n", orig_head->data, last_head->data );
	return (last_head);

}

int mult(char a, char b)
{
	return(a * b);
}


int div(int a, int b)
{
	return(a / b);
}


int sub(int a, int b)
{
	return(a - b);
}

int mod(int a, int b)
{
	return(a % b);
}

int add(int a, int b)
{
	return(a + b);
}

t_list	*do_math(t_list *last_head, t_list	*orig_head)
{
	int num;
	char op;

	num = 0;
	while(orig_head->next != last_head)

		if(DIV_PROD(orig_head->next->data))
		
			num = multiply(orig_head->data +'0', orig_head->next->next->data) 
		

















int main()
{
	/*char * f = "1";
	char * s = "2";	
	char * t = "3";

	t_list	*expr_head;
	expr_head = create_elem(f);
	expr_head->next = create_elem(s);
	expr_head->next->next = create_elem(t);	
	*/
	
	char *input = "3 + 42 * |1 - 2 / (4 + 9) - 1 % 29| + 1";
	t_list *expr_head;
	expr_head = eval_expr(input);
	//parent_ops(expr_head);
//	printf("data1 :  %c\ndata2 :  %c\ndata3 :  %c\n", expr_head->data, expr_head->next->data, expr_head->next->next->data);
	
	int number = multiply(expr_head->next->next->data, expr_head->data);
	
	
	
			printf("num:  %d",number);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return (0);






























}
