/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:49:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/06 11:51:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int		main(int argc, char **argv)
{
	char	*s;
	int 	ret;
	t_stack *stack_a;
	t_stack *stack_b;

	if (argc > 1)
	{
		stack_a = create_stack(argc - 1);	
		stack_b = create_stack(argc - 1);
		if (!(convert_args(stack_a, stack_b, argv, argc)))
			return (-1);
		ret = 1;
		while (ret != 0)
		{
			ret = get_next_line(0, &s);
			if (ret == 1)
			{
				//DO STUFF WITH THE READ COMMAND
				ft_printf("%s\n", s);
			}
		}
	}
	return (0);
}
