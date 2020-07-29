/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 11:40:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/23 11:54:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

void	sort_stack(t_stack *a, t_stack *b)
{
	int i;
	int median;

	i = 0;
	median = get_median(a);

	ft_printf("median is %d\n", median);
	
	ft_printf("STACK A:\n");
	for (int i = a->top; i >= 0; i--)
			ft_printf("%d\n", a->arr[i]);

	ft_printf("STACK b:\n");
	for (int i = b->top; i >= 0; i--)
			ft_printf("%d\n", b->arr[i]);
	
	while (i < (int)a->size)
	{
		if (stack_peek(a) < median)
			stack_push(b, stack_pop(a));
		else
			rotate_stack(a);
		i++;
	}

	ft_printf("\nSTACK A:\n");
	for (int i = a->top; i >= 0; i--)
			ft_printf("%d\n", a->arr[i]);

	ft_printf("STACK b:\n");
	for (int i = b->top; i >= 0; i--)
			ft_printf("%d\n", b->arr[i]);
}
