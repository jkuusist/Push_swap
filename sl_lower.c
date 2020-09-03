/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:39:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:39:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static	void	do_next_two(t_stack *a, t_stack *b)
{
	push_between(a, b, a->second_dec, a->third_dec);
	push_between(a, b, a->first_dec, a->second_dec);
}

void			sl_lower(t_stack *a, t_stack *b)
{
	push_between(a, b, a->fourth_dec, a->fifth_dec);
	push_between(a, b, a->third_dec, a->fourth_dec);
	
	do_next_two(a, b);
}
