/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:49:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/18 10:26:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

/*
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

static	void	handle_arg(int argc, char **argv)
{
	int ret; //CHANGE NAME BEFORE TURN-IN

	if (((argc <= 2) && (ft_strchr(argv[1], ' '))))
	{
		temp = ft_strsplit(argv[1], ' ');
		ret = 0;
		while (temp[ret] != NULL)
			ret++;
		a = create_stack(ret);
		b = create_stack(ret);
		convert_split(temp, a, b, ret);
	}
	else
	{
		a = create_stack(argc - 1);
		b = create_stack(argc - 1);
		if (!(convert_args(a, b, argv, argc)))
			return (-1);
	}

}
*/
int			main(int argc, char **argv)
{
//	char	*s;
//	char	**temp;
//	int		ret;
//	t_stack *a;
//	t_stack *b;

	if (argc > 1)
	{
		if (!ft_strcmp(argv[1], "-v"))
		{
			ft_printf("got into -v thing\n");

			checker_print(argc, argv);
			return (0);
		}
		else
			checker_arg(argc, argv);		
/*		else if (((argc <= 2) && (ft_strchr(argv[1], ' '))))
		{
			temp = ft_strsplit(argv[1], ' ');
			ret = 0;
			while (temp[ret] != NULL)
				ret++;
			a = create_stack(ret);
			b = create_stack(ret);
			convert_split(temp, a, b, ret);
		}
		else
		{
			a = create_stack(argc - 1);
			b = create_stack(argc - 1);
			if (!(convert_args(a, b, argv, argc)))
				return (-1);
		}
*/
/*
		ret = 1;
		while (ret != 0)
		{
			ret = get_next_line(0, &s);
			if (ret == 1)
			{
				if (check_input(s))
					handle_input(s, a, b);
				else
				{
					free(s);
					handle_error(a, b);
					return (-1);
				}
				free(s);
			}
		}
		if ((b->top == -1) && is_sorted(a))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
*/
//MAY LEAK, CHECK
//		destroy_stack(a);
//		destroy_stack(b);
	}
}
