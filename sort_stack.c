/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:40:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/23 11:54:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static	void	move_doer(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	while (i < (int)a->size)
	{
		if (stack_peek(a) < a->median)
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
}

void			sort_stack(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	a->median = get_median(a);
	while (i < (int)a->size)
	{
		if (stack_peek(a) >= a->median)
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	move_doer(a, b);
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
