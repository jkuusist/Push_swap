/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 10:24:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/18 10:24:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

static void	convert_split(char **temp, t_stack *a, t_stack *b, int i)
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

void		checker_arg(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**temp;
	int		i;

	if (((argc <= 2) && (ft_strchr(argv[1], ' '))))
	{
		temp = ft_strsplit(argv[1], ' ');
		i = 0;
		while (temp[i] != NULL)
			i++;
		a = create_stack(i);
		b = create_stack(i);
		convert_split(temp, a, b, i);
	}
	else
	{
		a = create_stack(argc - 1);
		b = create_stack(argc - 1);
		if (!(convert_args(a, b, argv, argc)))
			return ;
	}
	handle_instructions(a, b, 0);
	destroy_stack(a);
	destroy_stack(b);
}
