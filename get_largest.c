/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_largest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:24:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/02 11:22:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int	get_largest(t_stack *stack)
{
//	ft_printf("top of get_largest\n");

	int i;
	int res;

	if (stack->top != -1)
	{
		i = 1;
		res = 0;
		
//		ft_printf("stack->top is %u\n", stack->top);

		while (i < (int)stack->top)
		{
			if (stack->arr[i] > stack->arr[res])
				res = i;
			i++;
		}
		return (res);
	}
	return (-1);
}
