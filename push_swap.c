/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:07:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/20 12:13:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
//	int		temp;
	
	if (argc > 1)
	{
		stack_a = create_stack(argc - 1);
		stack_b = create_stack(argc - 1);
		if (!convert_args(stack_a, stack_b, argv, argc))
			return (-1);
		sort_stack(stack_a);

		for (int i = stack_a->top; i >= 0; i--)
			ft_printf("%d\n", stack_a->arr[i]);
	
		destroy_stack(stack_a);
		destroy_stack(stack_b);
	}
	return (0);
}
