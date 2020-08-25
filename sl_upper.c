/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:45:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:45:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <limits.h>

static	void	do_next_two(t_stack *a, t_stack *b)
{
	while (b->top > 0)
	{
		do_least_moves(a, b);
	}
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->sixth_dec, a->seventh_dec);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->fifth_dec, a->sixth_dec);
}

void			sl_upper(t_stack *a, t_stack *b)
{
	get_decs(a);
	push_between(a, b, a->ninth_dec, INT_MAX);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->eighth_dec, a->ninth_dec);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
	push_between(a, b, a->seventh_dec, a->eighth_dec);
	b->largest = b->arr[get_largest(b)];
	do_next_two(a, b);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
