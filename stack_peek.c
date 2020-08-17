/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_peek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:50:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/21 12:50:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <limits.h>

int	stack_peek(t_stack *stack)
{
	if (stack->top == -1)
		return (INT_MAX);
	return (stack->arr[stack->top]);
}
