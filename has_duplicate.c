/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/13 09:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	has_duplicate(t_stack *stack)
{
	int i;
	int j;

	i = 0;
	while (i <= stack->top)
	{
		j = i + 1;
		while (j <= stack->top)
		{
			if (stack->arr[i] == stack->arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
