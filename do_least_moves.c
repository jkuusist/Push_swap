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

static int	rot_moves(t_stack *stack, int elem_index)
{
	return (stack->top - elem_index);
}

static int	rev_rot_moves(int elem_index)
{
	return (elem_index + 1);
}

void		do_least_moves(t_stack *a, t_stack *b) //, int is_largest)
{
	int smallest_i;
	
	smallest_i = get_smallest(b);


//	ft_printf("b->top is %d\n", b->top);
//	ft_printf("smallest index is %d\nlargest index is %d\n", smallest, largest);
//	ft_printf("smallest elem is %d\nlargest elem is %d\n", b->arr[smallest], b->arr[largest]);

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
	push_ab(a, b, 'a');
	b->largest = b->arr[get_largest(b)];
	b->smallest = b->arr[get_smallest(b)];
}
