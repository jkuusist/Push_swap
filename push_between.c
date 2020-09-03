/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_between.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:41:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/21 12:46:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <limits.h>

#include "libft/libft.h"

static int		get_first(t_stack *a, int lower, int higher)
{
	int i;

	i = a->top;
	while (i >= 0)
	{
		if ((a->arr[i] < higher) && (a->arr[i] >= lower))
			return (i);
		i--;
	}
	return (-1);
}

static int		get_second(t_stack *a, int lower, int higher)
{
	int i;

	i = 0;
	while (i <= a->top)
	{
		if ((a->arr[i] < higher) && (a->arr[i] >= lower))
			return (i);
		i++;
	}
	return (-1);
}

void			push_between(t_stack *a, t_stack *b, int lower, int higher)
{
	int i;
	int first_i;
	int second_i;

	i = 0;
	while (is_in_stack(a, lower, higher))
	{
		first_i = get_first(a, lower, higher);
		second_i = get_second(a, lower, higher);
		if ((second_i != -1) && ((second_i + 1) < (a->top - first_i)))
		{
			while (!((stack_peek(a) < higher) && (stack_peek(a) >= lower)))
				rev_rotate_ab(a, 'a', 1);
			push_ab(a, b, 'b', 1);
		}
		else
		{
			while (!((stack_peek(a) < higher) && (stack_peek(a) >= lower)))
				rotate_ab(a, 'a', 1);
			push_ab(a, b, 'b', 1);
		}
		i++;
	}
}
