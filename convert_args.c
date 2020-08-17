/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:07:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/15 11:34:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

int	convert_args(t_stack *stack_a, t_stack *stack_b, char **argv, int argc)
{
	int		i;
		
	i = argc - 1;
		
//		ft_printf("conv_arg's i is %d\n", i);
//		ft_printf("argv[0] is |%s|\n", argv[0]);

	while ((i >= 0) && (ft_strcmp(argv[i], "./checker")) && (ft_strcmp(argv[i], "./push_swap")) && (ft_strcmp(argv[i], "-v")))
	{
//		ft_printf("argv[%d] is: |%s|\n", i, argv[i]);
		
		if (argv[i] && check_arg(argv[i]))
		{
//			ft_printf("1ca\n");
			stack_push(stack_a, ft_atoi(argv[i]));
		}
		else if (!argv[i])
		{
//			ft_printf("2ca\n");
			break;
		}
		else
		{
//			ft_printf("3ca\n");
			ft_printf("Error\n");
			destroy_stack(stack_a);
			destroy_stack(stack_b);
			return (0);
		}
		i--;
	}
	if (has_duplicate(stack_a))
	{
		ft_printf("Error\n");
		destroy_stack(stack_a);
		destroy_stack(stack_b);
		return (0);
	}
	return (1);
}
