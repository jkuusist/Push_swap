/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:39:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:39:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static	void	push_or_rot(t_stack *a, t_stack *b)
{
	if ((stack_peek(a) < a->third_dec)
			&& (stack_peek(a) >= a->second_dec))
		push_ab(a, b, 'b', 1);
	else
		rotate_ab(a, 'a', 1);
}

static	void	do_first_two(t_stack *a, t_stack *b, int i)
{
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < a->fifth_dec) && (stack_peek(a) >= a->fourth_dec))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	i = 0;
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < a->fourth_dec)
			&& (stack_peek(a) >= a->third_dec))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
}

static	void	do_next_two(t_stack *a, t_stack *b, int i)
{
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	i = 0;
	while (i < (int)a->size)
	{
		push_or_rot(a, b);
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	i = 0;
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < a->second_dec) && (stack_peek(a) >= a->first_dec))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
}

void			sl_lower(t_stack *a, t_stack *b)
{
	int i;


	i = 0;
	get_decs(a);
	do_first_two(a, b, i);
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	i = 0;
	do_next_two(a, b, i);
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
