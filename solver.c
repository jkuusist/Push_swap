/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:07:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/14 12:07:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int 	i;
	
	if (argc > 1)
	{
		stack_a = create_stack(argc - 1);
		stack_b = create_stack(argc - 1);
		i = 1;
		while (i < argc)
		{
			if (check_arg(argv[i])) 
				stack_push(stack_a, ft_atoi(argv[i]));
			else
			{
				ft_printf("Error\n");
				destroy_stack(stack_a);
				destroy_stack(stack_b);
				return (-1);
			}
			i++;
		}

	//REMOVE LATER
	for (int i = stack_a->top; i >= 0; i--)
		ft_printf("%d\n", stack_a->arr[i]);

		if (stack_a->arr[stack_a->top] > stack_a->arr[stack_a->top -1])
		{
			swap_elems(stack_a);
			ft_printf("sa\n");
		}	
	
	//REMOVE LATER
	for (int i = stack_a->top; i >= 0; i--)
		ft_printf("%d\n", stack_a->arr[i]);
	
		destroy_stack(stack_a);
		destroy_stack(stack_b);
	}
	return (0);
}
