/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:25:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/08 13:25:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	stack_pop(t_stack *stack)
{
	int res;

	res = 0;
	if (stack->top != -1)
	{
		res = stack->arr[stack->top];
		stack->top--;
	}
	return (res);
}
