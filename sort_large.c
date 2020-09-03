/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/10 11:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <limits.h>

void			sort_large(t_stack *a, t_stack *b)
{
	get_quints(a);
	push_between(a, b, a->fourth_quint, INT_MAX);
	push_between(a, b, a->third_quint, a->fourth_quint);
	push_between(a, b, a->second_quint, a->third_quint);
	push_between(a, b, a->first_quint, a->second_quint);
	push_between(a, b, INT_MIN, a->first_quint);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
