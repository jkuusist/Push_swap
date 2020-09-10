/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 10:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/14 10:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	int i;

	if (a->top >= b->top)
		i = a->top;
	else
		i = b->top;
	ft_printf("\nTOP\n\n");
	while (i >= 0)
	{
		if (i > b->top)
			ft_printf("%d\n", a->arr[i]);
		else if (i > a->top)
			ft_printf("%-13s %d\n", " ", b->arr[i]);
		else
			ft_printf("%-13d %d\n", a->arr[i], b->arr[i]);
		i--;
	}
	ft_printf("%-13s STACK B\n", "STACK A");
}
