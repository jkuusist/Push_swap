/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_very_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:42:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:42:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	sort_very_large(t_stack *a, t_stack *b)
{
	int i;

	i = 0;
	sl_upper(a, b);
	sl_lower(a, b);
	while (i < (int)a->size)
	{
		if (stack_peek(a) < a->first_dec)
			push_ab(a, b, 'b', 1);
		else
			rotate_ab(a, 'a', 1);
		i++;
	}
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
