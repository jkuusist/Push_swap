/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_least_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 10:48:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/02 11:31:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static int	rot_moves(t_stack *stack, int elem_index)
{
	int ret;

	ret = 0;
	while (stack->arr[stack->top] != stack->arr[elem_index])
	{
		rotate_stack(stack);
		ret++;
	}
	return (ret - 1);
}

static int	rev_rot_moves(t_stack *stack, int elem_index)
{
	
	int ret;

	ret = 0;
	while (stack->arr[stack->top] != stack->arr[elem_index])
	{
		reverse_rotate_stack(stack);
		ret++;
	}
	return (ret - 1);
}

void		do_least_moves(t_stack *a, t_stack *b, int is_largest)
{
	int smallest;
	int largest;
	
	smallest = get_smallest(b);
	largest = get_largest(b);

	ft_printf("b->top is %d\n", b->top);
	ft_printf("smallest index is %d\nlargest index is %d\n", smallest, largest);
	ft_printf("smallest elem is %d\nlargest elem is %d\n", b->arr[smallest], b->arr[largest]);

	if (is_largest)
	{
		if (rot_moves(b, largest) < rev_rot_moves(b, largest))
		{
			while (b->arr[b->top] != largest)
				rotate_stack(b);
		}
		else
		{
			while (b->arr[b->top] != largest)
				reverse_rotate_stack(b);
		}
	}
	else
	{
		if (rot_moves(b, smallest) < rev_rot_moves(b, smallest))
		{
			while (b->arr[b->top] != smallest)
				rotate_stack(b);
		}
		else
		{
			while (b->arr[b->top] != smallest)
				reverse_rotate_stack(b);
		}
	}
	stack_push(a, stack_pop(b));
}
