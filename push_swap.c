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
#include <stdlib.h>

static	void	check_and_sort(t_stack *a, t_stack *b, int argc)
{
	if (is_sorted(a))
	{
		destroy_stack(a);
		destroy_stack(b);
		return ;
	}
	if (argc >= 500)
		sort_very_large(a, b);
	else 

	if (argc <= 6)
		sort_small(a, b);
	else if (argc <= 50)
		sort_stack(a, b);
	else
		sort_large(a, b);

//	print_stack(a);


	destroy_stack(a);
	destroy_stack(b);
}

static	void	arg_helper(t_stack *a, t_stack *b, char **temp, int i)
{
	if (!convert_args(a, b, temp, i))
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

static	void	handle_arg(int *argc, char **argv)
{
	char	**temp;
	int		i;
	t_stack *a;
	t_stack *b;

	temp = ft_strsplit(argv[1], ' ');
	i = 0;
	while (temp[i] != NULL)
		i++;
	*argc = i;
	a = create_stack(i);
	b = create_stack(i);
	arg_helper(a, b, temp, i);
	check_and_sort(a, b, *argc);
}

int				main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
	{
		if ((argc <= 2) && (ft_strchr(argv[1], ' ')))
			handle_arg(&argc, argv);
		else
		{
			a = create_stack(argc - 1);
			b = create_stack(argc - 1);
			if (!convert_args(a, b, argv, argc))
				return (-1);
			check_and_sort(a, b, argc);
		}
	}
	return (0);
}
