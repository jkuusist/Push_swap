/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:15:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/05 10:15:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	print_stack(t_stack *stack)
{
	int i;

	i = stack->top;
	ft_printf("_\n");
	while (i >= 0)
	{
		ft_printf("%d\n", stack->arr[i]);
		i--;
	}
}
