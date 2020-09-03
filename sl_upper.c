/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:45:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:45:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <limits.h>

void			sl_upper(t_stack *a, t_stack *b)
{
	get_decs(a);
	push_between(a, b, a->ninth_dec, INT_MAX);
	push_between(a, b, a->eighth_dec, a->ninth_dec);
	push_between(a, b, a->seventh_dec, a->eighth_dec);
	push_between(a, b, a->sixth_dec, a->seventh_dec);
	push_between(a, b, a->fifth_dec, a->sixth_dec);
}
