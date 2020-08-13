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

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**temp;
	int		i;	

	if (argc > 1)
	{
		if ((argc <= 2) && (ft_strchr(argv[1], ' '))) //OR 3 WITH -v
		{
			temp = ft_strsplit(argv[1], ' ');
			i = 0;
			while (temp[i] != NULL)
				i++;
			argc = i;
			a = create_stack(i);
			b = create_stack(i);
			if (!convert_args(a, b, temp, i))	
			{
				destroy_stack(a);
				destroy_stack(b);
				return (-1);
			}
		}
		else
		{
			a = create_stack(argc - 1);
			b = create_stack(argc - 1);
			if (!convert_args(a, b, argv, argc))
			{
				destroy_stack(a);
				destroy_stack(b);
				return (-1);
			}
		}
/*
		ft_printf("STACK_A:\n");
		print_stack(a);
		ft_printf("STACK_B:\n");
		print_stack(b);
		ft_printf("\n");
*/
		if (is_sorted(a))
		{

			destroy_stack(a);
			destroy_stack(b);
			return (0);
		}
		if (argc >= 500)
			sort_large(a, b);
		else if (argc <= 6)
			sort_small(a, b);
		else
			sort_stack(a, b);
/*		
		ft_printf("STACK_A:\n");
		print_stack(a);
		ft_printf("STACK_B:\n");
		print_stack(b);
		ft_printf("\n");

		if (is_sorted(a))
			ft_printf("FINE\n");
		else
			ft_printf("NOPE\n");
*/		
		destroy_stack(a);
		destroy_stack(b);
	}
	return (0);
}
