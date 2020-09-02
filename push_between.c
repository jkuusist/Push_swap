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
//		ft_printf("went into pb's while. a->top is now %d\n", a->top);

		j = a->top;
		first_i = -1;
		second_i = -1;
		while (j >= 0)
		{
			if ((a->arr[j] < higher) && (a->arr[j] >= lower))
			{
				first_i = j; 
//				first = a->arr[j];
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
//				second = a->arr[j];
				break;
			}
			j++;
		}

//		ft_printf("first is %d. second is %d\n", a->arr[first_i], a->arr[second_i]);

		if ((second_i != -1) && ((second_i + 1) < (a->top - first_i)))
		{
			while (!((stack_peek(a) < higher ) && (stack_peek(a) >= lower)))
				rev_rotate_ab(a, 'a', 1);

//			ft_printf("a top is %d. pushing to b\n", a->arr[a->top]);

			push_ab(a, b, 'b', 1);
		}
		else
		{
			while (!((stack_peek(a) < higher ) && (stack_peek(a) >= lower)))
				rotate_ab(a, 'a', 1);

//			ft_printf("a top is %d. pushing to b\n", a->arr[a->top]);

			push_ab(a, b, 'b', 1);
		}
		i++;
	}
/*
	if (lower == INT_MIN)
	{
	ft_printf("exiting push_between. stack a is now:\n");
	print_stack(a);
	ft_printf("\n");
	}
*/
}

/*
		if ((stack_peek(a) < higher) && (stack_peek(a) >= lower))
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
}
*/
