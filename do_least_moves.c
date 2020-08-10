/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_least_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 10:48:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/05 10:11:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <limits.h>

/*
static int	rot_moves(t_stack *stack, int elem_index)
{
	return (stack->top - elem_index);
}

static int	rev_rot_moves(int elem_index)
{
	return (elem_index + 1);
}
*/

static void	find_least_moves(t_stack *stack)
{
	int smallest_i;
	int largest_i;

	smallest_i = get_smallest(stack);
	largest_i = get_largest(stack);
	
	stack->small_rot = INT_MAX;
	stack->small_rrot = INT_MAX;
	stack->large_rot = INT_MAX;
	stack->large_rrot = INT_MAX;
/*
	ft_printf("stack->top - smallest_i = %d\n", stack->top - smallest_i);
	ft_printf("smallest_i + 1 = %d\n", smallest_i + 1);
	ft_printf("stack->top - largest_i = %d\n", stack->top - largest_i);
	ft_printf("largest_i + 1 = %d\n", largest_i + 1);
*/	

	if ((stack->top - smallest_i) > (smallest_i + 1))
	{
//		ft_printf("1\n");
		stack->small_rrot = smallest_i + 1;
	}
	else
	{
//		ft_printf("2\n");
		stack->small_rot = stack->top - smallest_i;
	}
	if ((stack->top - largest_i) > (largest_i + 1))
	{
//		ft_printf("3\n");
		stack->large_rrot = largest_i + 1;
	}
	else
	{
//		ft_printf("4\n");
		stack->large_rot = stack->top - largest_i;
	}
}

void		do_least_moves(t_stack *a, t_stack *b) //, int is_largest)
{
//	int smallest_i;
//	smallest_i = get_smallest(b);

//	ft_printf("b->top is %d\n", b->top);
//	ft_printf("smallest index is %d\nlargest index is %d\n", smallest, largest);
//	ft_printf("smallest elem is %d\nlargest elem is %d\n", b->arr[smallest], b->arr[largest]);

/*
	if (rot_moves(b, smallest_i) < rev_rot_moves(smallest_i))
	{
		while (b->arr[b->top] != b->smallest)
		{
			rotate_ab(b, 'b');
		}
	}
	else
	{
		while (b->arr[b->top] != b->smallest)
		{
			rev_rotate_ab(b, 'b');
		}
	}
*/
	int placeholder_flag;

	placeholder_flag = 0;
	find_least_moves(b);
	
	//MOVE THE ONE WITH LEAST MOVES TO THE TOP OF B
	//AND PUSH IT TO A. THEN ROTATE A IF NECESSARY

	if ((b->small_rot != INT_MIN) && (b->small_rot < b->large_rot) && (b->small_rot < b->large_rrot))
	{
		ft_printf("1\n");

		while (b->arr[b->top] != b->smallest)
			rotate_ab(b, 'b');
		placeholder_flag = 1;
	}
	else if ((b->small_rrot != INT_MIN) && (b->small_rrot < b->large_rot) && (b->small_rrot < b->large_rrot))
	{
		ft_printf("2\n");

		while (b->arr[b->top] != b->smallest)
			rev_rotate_ab(b, 'b');
		placeholder_flag = 1;
	}
	else if ((b->large_rot != INT_MIN) && (b->large_rot < b->small_rot) && (b->large_rot < b->small_rrot))
	{
		ft_printf("3\n");

		while (b->arr[b->top] != b->largest)
			rotate_ab(b, 'b');
	}
	else if ((b->large_rrot != INT_MIN) && (b->large_rrot < b->small_rot) && (b->large_rrot < b->small_rrot))
	{
		ft_printf("4\n");

		while (b->arr[b->top] != b->largest)
			rev_rotate_ab(b, 'b');
	}
	push_ab(a, b, 'a');
	if (!placeholder_flag)
		rotate_ab(a, 'a');
	b->largest = b->arr[get_largest(b)];
	b->smallest = b->arr[get_smallest(b)];
}
