/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_between.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:41:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/21 12:46:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

#include "libft/libft.h"

void	push_between(t_stack *a, t_stack *b, int lower, int higher)
{
	int i;

	i = 0;
	while (i < (int)a->size)
	{
		if ((stack_peek(a) < higher) && (stack_peek(a) >= lower))
		{	
//			ft_printf("in pbet's if");		
			push_ab(a, b, 'b', 1);
		}
		else
		{
//			ft_printf("in pbet's else");
			rotate_ab(a, 'a', 1);
		}
		i++;
	}
}
