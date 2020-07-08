/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:02:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/08 13:02:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	stack_push(t_stack *stack, int num)
{
	if (stack->top < (int)(stack->size - 1))
	{
		stack->top++;
		stack->arr[stack->top] = num;
	}
}
