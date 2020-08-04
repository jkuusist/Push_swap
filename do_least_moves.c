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
/*	int ret;
	int temp;

	ret = 0;
	temp = stack->arr[elem_index];
	while (stack->arr[stack->top] != temp)
	{
//		ft_printf("5\n");
		rotate_stack(stack);
		ret++;
	}
	return (ret - 1);
*/
	return (stack->top - elem_index);
	
}

static int	rev_rot_moves(/*t_stack *stack, */int elem_index)
{
/*
	int ret;
	int temp;

	ret = 0;
	temp = stack->arr[elem_index];
	while (stack->arr[stack->top] != temp)
	{
//		ft_printf("6\n");
		reverse_rotate_stack(stack);
		ret++;
	}
	return (ret - 1);
*/
	return (elem_index + 1);
}

void		do_least_moves(t_stack *a, t_stack *b, int is_largest)
{
	int smallest_i;
	int largest_i;
	
	smallest_i = get_smallest(b);
	largest_i = get_largest(b);

//	ft_printf("b->top is %d\n", b->top);
//	ft_printf("smallest index is %d\nlargest index is %d\n", smallest, largest);
//	ft_printf("smallest elem is %d\nlargest elem is %d\n", b->arr[smallest], b->arr[largest]);

	if (is_largest)
	{
		if (rot_moves(b, largest_i) < rev_rot_moves(/*b, */largest_i))
		{
			while (b->arr[b->top] != b->largest)
			{
			//	ft_printf("1\n");
			//	ft_printf("b's top is %d. b->largest is %d\n", b->arr[b->top], b->largest);
				rotate_stack(b);
			}
		}
		else
		{
			while (b->arr[b->top] != b->largest)
			{
				ft_printf("2\n");
//				ft_printf("b's top is %d. largest elem is %d\n", b->arr[b->top], b->arr[largest]);
				reverse_rotate_stack(b);
			}
		}
	}
	else
	{
		if (rot_moves(b, smallest_i) < rev_rot_moves(/*b, */smallest_i))
		{
			while (b->arr[b->top] != b->smallest)
			{
				ft_printf("3\n");
				rotate_stack(b);
			}
		}
		else
		{
			while (b->arr[b->top] != b->smallest)
			{
				ft_printf("b's top is %d. b->smallest is %d\n", b->arr[b->top], b->smallest);
//				ft_printf("4\n");
				reverse_rotate_stack(b);
			}
		}
	}
	stack_push(a, stack_pop(b));
}
