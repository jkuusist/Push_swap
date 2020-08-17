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
	while ((i >= 0) && (ft_strcmp(argv[i], "./checker"))
		&& (ft_strcmp(argv[i], "./push_swap")) && (ft_strcmp(argv[i], "-v")))
	{
		if (argv[i] && check_arg(argv[i]))
			stack_push(stack_a, ft_atoi(argv[i]));
		else if (!argv[i])
			break ;
		else
		{
			handle_error(stack_a, stack_b);
			return (0);
		}
		i--;
	}
	if (has_duplicate(stack_a))
	{
		handle_error(stack_a, stack_b);
		return (0);
	}
	return (1);
}
