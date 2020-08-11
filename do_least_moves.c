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

void		do_least_moves(t_stack *a, t_stack *b)
{
	int smallest_i;
	
	smallest_i = get_smallest(b);

	if ((b->top - smallest_i) < (smallest_i + 1))
	{
		while (b->arr[b->top] != b->smallest)
		{
			rotate_ab(b, 'b', 1);
		}
	}
	else
	{
		while (b->arr[b->top] != b->smallest)
		{
			rev_rotate_ab(b, 'b', 1);
		}
	}
	push_ab(a, b, 'a', 1);
	b->largest = b->arr[get_largest(b)];
	b->smallest = b->arr[get_smallest(b)];
}
