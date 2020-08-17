/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:02:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/07 12:29:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	rev_rotate_ab(t_stack *stack, char id, int is_print)
{
	if (id == 'a')
	{
		reverse_rotate_stack(stack);
		if (is_print)
			ft_printf("rra\n");
	}
	else if (id == 'b')
	{
		reverse_rotate_stack(stack);
		if (is_print)
			ft_printf("rrb\n");
	}
}
