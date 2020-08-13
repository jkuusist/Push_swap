/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:04:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/06 13:04:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static void	sort_two(t_stack *a)
{
	if (a->arr[0] < a->arr[1])
		swap_ab(a, 'a', 1);
}

static void	sort_three(t_stack *a)
{
	int largest;

	if (is_sorted(a))
		return ;
	largest = a->arr[get_largest(a)];
	while (a->arr[0] != largest)
		rev_rotate_ab(a, 'a', 1);
	if (a->arr[a->top] > a->arr[1])
		swap_ab(a, 'a', 1);
}

static void	sort_four(t_stack *a, t_stack *b)
{
	int smallest_i;
	int smallest;

	smallest_i = get_smallest(a);
	smallest = a->arr[smallest_i];
	if ((a->top - smallest_i) < (smallest_i + 1))
	{
		while (a->arr[a->top] != smallest)
		{
			rotate_ab(a, 'a', 1);
		}
	}
	else
	{
		while (a->arr[a->top] != smallest)
		{
			rev_rotate_ab(a, 'a', 1);
		}
	}
	push_ab(a, b, 'b', 1);
	sort_three(a);
	push_ab(a, b, 'a', 1);
}

static void	sort_five(t_stack *a, t_stack *b)
{
	int smallest_i;
	int smallest;

	smallest_i = get_smallest(a);
	smallest = a->arr[smallest_i];
	if ((a->top - smallest_i) < (smallest_i + 1))
	{
		while (a->arr[a->top] != smallest)
			rotate_ab(a, 'a', 1);
	}
	else
	{
		while (a->arr[a->top] != smallest)
			rev_rotate_ab(a, 'a', 1);
	}
	push_ab(a, b, 'b', 1);
	sort_four(a, b);
	push_ab(a, b, 'a', 1);
}

void		sort_small(t_stack *a, t_stack *b)
{
	if (a->top == 1)
		sort_two(a);
	else if	(a->top == 2)
		sort_three(a);
	else if (a->top == 3)
		sort_four(a, b);
	else if (a->top == 4)
		sort_five(a, b);
}
