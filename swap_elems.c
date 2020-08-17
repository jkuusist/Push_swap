/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_elems.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:17:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/09 10:17:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	swap_elems(t_stack *stack)
{
	int temp;

	if (stack->top > 0)
	{
		temp = stack->arr[stack->top];
		stack->arr[stack->top] = stack->arr[stack->top - 1];
		stack->arr[stack->top - 1] = temp;
	}
}
