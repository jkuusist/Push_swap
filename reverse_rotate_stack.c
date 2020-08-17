/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:10:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/09 11:10:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	reverse_rotate_stack(t_stack *stack)
{
	int btm_temp;
	int i;

	if (stack->top > 0)
	{
		btm_temp = stack->arr[0];
		i = 0;
		while (i < stack->top)
		{
			stack->arr[i] = stack->arr[i + 1];
			i++;
		}
		stack->arr[stack->top] = btm_temp;
	}
}
