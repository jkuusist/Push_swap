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
#include <limits.h>

static	void	do_first_two(t_stack *a, t_stack *b)
{
	push_between(a, b, a->third_quint, a->fourth_quint);
/*
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);

//	ft_printf("b->top is %d. pushing to a\n", stack_peek(b));

	push_ab(a, b, 'a', 1);
*/
	push_between(a, b, a->second_quint, a->third_quint);
}

static	void	do_next_two(t_stack *a, t_stack *b)
{
/*
	while (b->top > 0)
		do_least_moves(a, b);

//	ft_printf("b->top is %d. pushing to a\n", stack_peek(b));

	push_ab(a, b, 'a', 1);
*/
	push_between(a, b, a->first_quint, a->second_quint);
/*
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);

//	ft_printf("b->top is %d. pushing to a\n", stack_peek(b));

	push_ab(a, b, 'a', 1);
*/
	push_between(a, b, INT_MIN, a->first_quint);
}

void			sort_large(t_stack *a, t_stack *b)
{
	get_quints(a);
	push_between(a, b, a->fourth_quint, INT_MAX);
/*
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);

//	ft_printf("b->top is %d. pushing to a\n", stack_peek(b));

	push_ab(a, b, 'a', 1);
*/
	do_first_two(a, b);
/*
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
*/
	do_next_two(a, b);
//	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);

//	ft_printf("b->top is %d. pushing to a\n", stack_peek(b));

	push_ab(a, b, 'a', 1);

//	print_stack(a);

}
