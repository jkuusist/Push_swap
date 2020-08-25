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

static	void	do_next_two(t_stack *a, t_stack *b)
{
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->second_dec, a->third_dec);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->first_dec, a->second_dec);
}

void			sl_lower(t_stack *a, t_stack *b)
{
	get_decs(a);
	push_between(a, b, a->fourth_dec, a->fifth_dec);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->third_dec, a->fourth_dec);

	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	do_next_two(a, b);
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
