/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:52:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/09 10:52:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	rotate_stack(t_stack *stack)
{
//	ft_printf("rot stack\n");

	int top_temp;
	int i;

	ft_printf("stack's top is %d\n", stack->arr[stack->top]);

	if (stack->top > 0)
	{
		top_temp = stack->arr[stack->top];
		i = stack->top - 1;
		while (i > -1)
		{
			stack->arr[i + 1] = stack->arr[i];
			i--;
		}
		stack->arr[0] = top_temp;

		ft_printf("stack's top is %d\n", stack->arr[stack->top]);
	}
}
