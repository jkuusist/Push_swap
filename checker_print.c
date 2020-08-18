/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 10:52:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/14 10:52:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

static	void	convert_to_stacks(char **temp, t_stack *a, t_stack *b, int i)
{
	if (!(convert_args(a, b, temp, i)))
	{
		while (i >= 0)
		{
			free(temp[i]);
			i--;
		}
		free(temp);
		return ;
	}
	while (i >= 0)
	{
		free(temp[i]);
		i--;
	}
	free(temp);
}

static	void	handle_arg(char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**temp;
	int		i;

	temp = ft_strsplit(argv[2], ' ');
	i = 0;
	while (temp[i] != NULL)
		i++;
	a = create_stack(i);
	b = create_stack(i);
	convert_to_stacks(temp, a, b, i);
	handle_instructions(a, b, 1);
	destroy_stack(a);
	destroy_stack(b);
}

void			checker_print(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		if (((argc <= 3) && (ft_strchr(argv[2], ' '))))
			handle_arg(argv);
		else
		{
			a = create_stack(argc - 1);
			b = create_stack(argc - 1);
			if (!(convert_args(a, b, argv, argc)))
				return ;
			handle_instructions(a, b, 1);
			destroy_stack(a);
			destroy_stack(b);
		}
	}
}
