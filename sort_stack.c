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
	print_stack(a);

	ft_printf("STACK B:\n");
	print_stack(b);
	ft_printf("\n");
	
	while (i < (int)a->size)
	{
		if (stack_peek(a) <= median)
			stack_push(b, stack_pop(a));
		else
			rotate_stack(a);
		i++;
	}
	
	ft_printf("STACK A:\n");
	print_stack(a);

	ft_printf("STACK B:\n");
	print_stack(b);
	ft_printf("\n");
	
	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

//	ft_printf("b->smallest is %d. b->largest is %d\n", b->smallest, b->largest);

	//FIND LARGEST IN STACK_B AND ROTATE IT TO TOP
	//PUSH IT TO STACK_A
	//ROTATE IT TO BOTTOM OF STACK_A

	while (b->top > 0) //!= -1)
	{
		do_least_moves(a, b, 0);
	}

	stack_push(a, stack_pop(b));

	i = 0;
	while (i < (int)a->size)
	{
		if (stack_peek(a) > median)
			stack_push(b, stack_pop(a));
		else
			rotate_stack(a);
		i++;
	}

	b->smallest = b->arr[get_smallest(b)];
	b->largest = b->arr[get_largest(b)];

	//FIND SMALLEST IN STACK_B AND ROTATE IT TO TOP
	//PUSH IT TO STACK_A
	//REPEAT UNTIL STACK_B IS EMPTY

	while (b->top > 0) //!= -1)
	{
		do_least_moves(a, b, 0);
	}

	stack_push(a, stack_pop(b));

	ft_printf("\nSTACK A:\n");
	print_stack(a);

	ft_printf("STACK B:\n");
	print_stack(b);
	ft_printf("\n");
}
