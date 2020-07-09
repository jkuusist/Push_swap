/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:03:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/08 12:03:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	rotate_stack(t_stack *stack)
{
	int top_temp;
	int i;

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
	}
}
