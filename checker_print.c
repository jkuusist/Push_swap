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

void	checker_print(int argc, char **argv)
{
	char	*s;
	char	**temp;
	int		ret;
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (argc > 1)
	{
		if (((argc <= 3) && (ft_strchr(argv[2], ' '))))
		{
			temp = ft_strsplit(argv[2], ' ');
			i = 0;
			while (temp[i] != NULL)
				i++;
			a = create_stack(i);
			b = create_stack(i);
			if (!(convert_args(a, b, temp, i)))
			{
				destroy_stack(a);
				destroy_stack(b);
				return ;
			}
		}
		else
		{
			a = create_stack(argc - 1);
			b = create_stack(argc - 1);
			if (!(convert_args(a, b, argv, argc)))
			{
				destroy_stack(a);
				destroy_stack(b);
				return ;
			}
		}
		ret = 1;
		while (ret != 0)
		{
			print_stacks(a, b);
			ret = get_next_line(0, &s);
			if (ret == 1)
			{
				if (!ft_strcmp(s, "sa"))
					swap_ab(a, 'a', 0);
				else if (!ft_strcmp(s, "sb"))
					swap_ab(b, 'b', 0);
				else if (!ft_strcmp(s, "ss"))
				{
					swap_ab(a, 'a', 0);
					swap_ab(b, 'b', 0);
				}
				else if (!ft_strcmp(s, "pa"))
					push_ab(a, b, 'a', 0);
				else if (!ft_strcmp(s, "pb"))
					push_ab(a, b, 'b', 0);
				else if (!ft_strcmp(s, "ra"))
					rotate_ab(a, 'a', 0);
				else if (!ft_strcmp(s, "rb"))
					rotate_ab(b, 'b', 0);
				else if (!ft_strcmp(s, "rr"))
				{
					rotate_ab(a, 'a', 0);
					rotate_ab(b, 'b', 0);
				}
				else if (!ft_strcmp(s, "rra"))
					rev_rotate_ab(a, 'a', 0);
				else if (!ft_strcmp(s, "rrb"))
					rev_rotate_ab(b, 'b', 0);
				else if (!ft_strcmp(s, "rrr"))
				{
					rev_rotate_ab(a, 'a', 0);
					rev_rotate_ab(b, 'b', 0);
				}
				else
				{
					ft_printf("Error\n");
					destroy_stack(a);
					destroy_stack(b);
					return ;
				}
			}
		}
		if ((b->top == -1) && is_sorted(a))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		destroy_stack(a);
		destroy_stack(b);
	}
}
