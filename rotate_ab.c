/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/07 11:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	rotate_ab(t_stack *stack, char id, int is_print)
{
	if (stack->top > 0)
	{
		if (id == 'a')
		{
			rotate_stack(stack);
			if (is_print)
				ft_printf("ra\n");
		}
		else if (id == 'b')
		{
			rotate_stack(stack);
			if (is_print)
				ft_printf("rb\n");
		}
	}
}
