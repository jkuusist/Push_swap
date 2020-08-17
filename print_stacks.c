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

	i = a->top;
	ft_printf("TOP\n\n");
	while (i >= 0)
	{
		if (i > b->top)
			ft_printf("%d\n", a->arr[i]);
		else
			ft_printf("%d  %d\n", a->arr[i], b->arr[i]);
		i--;
	}
	ft_printf("A  B\n");
}
