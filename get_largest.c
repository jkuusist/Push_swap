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

int	get_largest(t_stack *stack)
{
	int i;
	int res;

	if (stack->top != -1)
	{
		i = 1;
		res = 0;
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
