/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:36:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/06 12:36:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	push_ab(t_stack *a, t_stack *b, char id)
{
	if (id == 'a')
	{
		if (b->top > -1)
		{
			stack_push(a, stack_pop(b));
			ft_printf("pa\n");
		}
	}
	else if (id == 'b')
	{
		if (a->top > -1)
		{
			stack_push(b, stack_pop(a));
			ft_printf("pb\n");
		}
	}
}
