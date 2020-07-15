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

int	convert_args(t_stack *stack_a, t_stack *stack_b, char **argv, int argc)
{
	int i;

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
			return (0);
		}
		i++;
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
