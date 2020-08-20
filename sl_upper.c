

#include "includes/push_swap.h"
#include "libft/libft.h"

static	void	push_or_rot(t_stack *a, t_stack *b)
{
	if ((stack_peek(a) < a->seventh_quint)
			&& (stack_peek(a) >= a->sixth_quint))
		push_ab(a, b, 'b', 1);
	else
		rotate_ab(a, 'a', 1);
}

static	void	do_first_two(t_stack *a, t_stack *b, int i)
{
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < a->ninth_dec) && (stack_peek(a) >= a->eighth_dec))
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
		if ((stack_peek(a) < a->eigth_dec)
			&& (stack_peek(a) >= a->seventh_dec))
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
		if ((stack_peek(a) < a->sixth_dec) && (stack_peek(a) >= fifth_dec))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
}

void			sl_upper(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	get_decs(a);
	while (i < (int)a->size)
	{
		if (stack_peek(a) >= a->ninth_dec)
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
/*
	i = 0;
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < a->sixth_dec) && (stack_peek(a) >= fifth_dec))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
*/
}
