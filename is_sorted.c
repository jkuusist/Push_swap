/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:22:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/13 09:22:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int	is_sorted(t_stack *stack)
{
	int i;

	i = stack->top - 1;
	while (i >= 0)
	{
//		ft_printf("arr[i] is %d. arr[i+1] is %d\n", stack->arr[i], stack->arr[i + 1]);
		if (stack->arr[i] < stack->arr[i + 1])
			return (0);
		i--;
	}
	return (1);
}
