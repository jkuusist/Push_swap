/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:35:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/18 10:35:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

static	void	check_ok(t_stack *a, t_stack *b)
{
	if ((b->top == -1) && is_sorted(a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void			handle_instructions(t_stack *a, t_stack *b, int is_print)
{
	int		ret;
	char	*s;

	ret = 1;
	while (ret != 0)
	{
		if (is_print)
			print_stacks(a, b);
		ret = get_next_line(0, &s);
		if (ret == 1)
		{
			if (check_input(s))
				handle_input(s, a, b);
			else
			{
				free(s);
				handle_error(a, b);
				return ;
			}
			free(s);
		}
	}
	check_ok(a, b);
}
