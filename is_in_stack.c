/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 11:34:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/26 11:34:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

#include "libft/libft.h"

int		is_in_stack(t_stack *stack, int lower, int higher)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (i <= stack->top)
	{
		if ((stack->arr[i] >= lower) && (stack->arr[i] < higher))
			ret = 1;
		i++;
	}
	return (ret);
}
