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

void	push_between(t_stack *a, t_stack *b, int lower, int higher)
{
	int i;
	int j;
	int first_i;
	int second_i;

	i = 0;	
	while (is_in_stack(a, lower, higher))
	{
		j = a->top;
		first_i = -1;
		second_i = -1;
		while (j >= 0)
		{
			if ((a->arr[j] < higher) && (a->arr[j] >= lower))
			{
				first_i = j; 
				break;
			}
			j--;
		}
		j = 0;
		while (j <= a->top)
		{
			if ((a->arr[j] < higher) && (a->arr[j] >= lower))
			{
				second_i = j;
				break;
			}
			j++;
		}
		if ((second_i != -1) && ((second_i + 1) < (a->top - first_i)))
		{
			while (!((stack_peek(a) < higher ) && (stack_peek(a) >= lower)))
				rev_rotate_ab(a, 'a', 1);
			push_ab(a, b, 'b', 1);
		}
		else
		{
			while (!((stack_peek(a) < higher ) && (stack_peek(a) >= lower)))
				rotate_ab(a, 'a', 1);
			push_ab(a, b, 'b', 1);
		}
		i++;
	}
}
