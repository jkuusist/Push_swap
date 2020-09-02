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
//	while (i < (int)stack->size)
	while (i <= stack->top)
	{
//		ft_printf("lower is %d. higher is %d. arr[%d] is %d\n", lower, higher, i, stack->arr[i]);

		if ((stack->arr[i] >= lower) && (stack->arr[i] < higher))
		{
//			ft_printf("in iis. found %d\n", stack->arr[i]);
			ret = 1;
		}
		i++;
	}
	return (ret);
}
