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
	get_decs(a);
	push_between(a, b, a->ninth_dec, INT_MAX);
	push_between(a, b, a->eighth_dec, a->ninth_dec);
	push_between(a, b, a->seventh_dec, a->eighth_dec);
	push_between(a, b, a->sixth_dec, a->seventh_dec);
	push_between(a, b, a->fifth_dec, a->sixth_dec);
	push_between(a, b, a->fourth_dec, a->fifth_dec);
	push_between(a, b, a->third_dec, a->fourth_dec);
	push_between(a, b, a->second_dec, a->third_dec);
	push_between(a, b, a->first_dec, a->second_dec);
	push_between(a, b, INT_MIN, a->first_dec);
	b->largest = b->arr[get_largest(b)];
	while (b->top > 0)
		do_least_moves(a, b);
	push_ab(a, b, 'a', 1);
}
