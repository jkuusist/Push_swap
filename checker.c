/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:49:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/12 12:58:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int		main(int argc, char **argv)
{
	char	*s;
	char	**temp;
	int 	ret;
	t_stack *a;
	t_stack *b;
	int		i;

	if (argc > 1)
	{
		if ((argc <= 2) && (ft_strchr(argv[1], ' '))) //OR 3 WITH -v
		{

//		ft_printf("c1\n");
//		ft_printf("argv[1] is: |%s|\n", argv[1]);

			temp = ft_strsplit(argv[1], ' ');
/*
			i = 0;

			while (i < 4)
			{
				ft_printf("temp[%d] is: |%s|\n", i, temp[i]);
				i++;
			}
*/			
			i = 0;
			while (temp[i] != NULL)
			{
//				ft_printf("temp[%d] is: |%s|\n", i, temp[i]);
				i++;
			}

//			ft_printf("i is %d\n", i);

			a = create_stack(i);
			b = create_stack(i);
			if (!(convert_args(a, b, temp, (i /*+ 1*/))))
			{
				destroy_stack(a);
				destroy_stack(b);
				return (-1);
			}
		}
		else
		{
//			ft_printf("c2\n");
//			ft_printf("argc - 1 is %d\n", argc - 1);

			a = create_stack(argc - 1);	
			b = create_stack(argc - 1);	

//		ft_printf("argv[1] is: |%s|\n", argv[1]);
		
		if (!(convert_args(a, b, argv, argc)))
			{
				destroy_stack(a);
				destroy_stack(b);
				return (-1);
			}
			
		}

		ret = 1;
		while (ret != 0)
		{
/*
			ft_printf("STACK A:\n");
			print_stack(a);
			ft_printf("STACK B:\n");
			print_stack(b);
			ft_printf("\n");
*/
			ret = get_next_line(0, &s);
			if (ret == 1)
			{
//				ft_printf("s is |%s|\n", s);
				
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
					return (-1);
				}
			}
		}
		if (is_sorted(a))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		destroy_stack(a);
		destroy_stack(b);
	}
	return (0);
}
