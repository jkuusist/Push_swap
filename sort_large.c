/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/10 11:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	sort_large(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	get_quarts(a);

//	ft_printf("first is %d\nsecond is %d\nthird is %d\n", a->first_quart, a->second_quart, a->third_quart);

	while (i < (int)a->size)
	{
		if (stack_peek(a) <= a->first_quart)
			push_ab(a, b, 'b');
		else
			rotate_ab(a, 'a');
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

	while (b->top > 0)
	{
		do_least_moves(a, b); 
	}

	push_ab(a, b, 'a');

	i = 0;
	
	while (i < (int)a->size)
	{
		if ((stack_peek(a) > a->first_quart) && (stack_peek(a) <= a->second_quart))
			push_ab(a, b, 'b');
		else
			rotate_ab(a, 'a');
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

	while (b->top > 0)
	{
		do_least_moves(a, b);
	}

	push_ab(a, b, 'a');

	i = 0;

	while (i < (int)a->size)
	{
		if ((stack_peek(a) > a->second_quart) && (stack_peek(a) <= a->third_quart))
			push_ab(a, b, 'b');
		else
			rotate_ab(a, 'a');
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

	while (b->top > 0)
	{
		do_least_moves(a, b);
	}

	push_ab(a, b, 'a');

	i = 0;

	while (i < (int)a->size)
	{
		if (stack_peek(a) > a->third_quart)
			push_ab(a, b, 'b');
		else
			rotate_ab(a, 'a');
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

	while (b->top > 0)
	{
		do_least_moves(a, b);
	}

	push_ab(a, b, 'a');
/*
	ft_printf("\nSTACK A:\n");
	print_stack(a);

	ft_printf("STACK B:\n");
	print_stack(b);
	ft_printf("\n");
*/
}
