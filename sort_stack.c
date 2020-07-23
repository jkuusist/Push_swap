/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:40:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/23 11:54:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static void	insert_element(t_stack *stack, int element)
{
	int temp;

	if ((stack->top == -1) || (element < stack->arr[stack->top]))
	{	
		stack_push(stack, element);
		ft_printf("push\n");
	}
	else
	{
		temp = stack_pop(stack);
		insert_element(stack, element);
		stack_push(stack, temp);
		ft_printf("push\n");
	}
}

void	sort_stack(t_stack *stack)
{
	int temp;

	if (stack->top != -1)
	{
		temp = stack_pop(stack);
		sort_stack(stack);
		insert_element(stack, temp);
	}
}
