/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:03:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/07 12:29:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	swap_ab(t_stack *stack, char id)
{
	if (id == 'a')
	{
		swap_elems(stack);
		ft_printf("sa\n");
	}
	else if (id == 'b')
	{
		swap_elems(stack);
		ft_printf("sb\n");
	}
}

