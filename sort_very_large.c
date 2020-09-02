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
#include "libft/libft.h"
#include <limits.h>

void	sort_very_large(t_stack *a, t_stack *b)
{
	sl_upper(a, b);
	sl_lower(a, b);
	push_between(a, b, INT_MIN, a->first_dec);
	while (a->top >= 0)
		push_ab(a, b, 'b', 1);
	b->largest = b->arr[get_largest(b)];
/*
	ft_printf("stack a:\n");
	print_stack(a);
	ft_printf("stack b:\n");
	print_stack(b);
*/
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
