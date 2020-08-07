/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:04:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/06 13:04:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

static void	sort_two(t_stack *a)
{
	if (a->arr[0] > a->arr[1])
	{
		swap_ab(a, 'a');
//		swap_elems(a);
//		ft_printf("sa\n");
	}
}

static void	sort_three(t_stack *a)
{
//	print_stack(a);

	if (is_sorted(a))
		return ;
	if ((a->arr[0] > a->arr[2]) && (a->arr[1] > a->arr[2]) && (a->arr[0] > a->arr[1]))
	{
		rotate_ab(a, 'a');
//		rotate_stack(a);
//		ft_printf("ra\n");
		swap_ab(a, 'a');
//		swap_elems(a);
//		ft_printf("sa\n");
	}
	else if ((a->arr[0] > a->arr[2]) && (a->arr[1] > a->arr[2]))
	{
		rotate_ab(a, 'a');
//		rotate_stack(a);
//		ft_printf("ra\n");
	}
	else if (a->arr[0] > a->arr[2])
	{
		rev_rotate_ab(a, 'a');
//		reverse_rotate_stack(a);
//		ft_printf("rra\n");
	}
	else if (a->arr[2] > a->arr[1])
	{
		rotate_ab(a, 'a');
//		rotate_stack(a);
//		ft_printf("ra\n");
		swap_ab(a, 'a');
//		swap_elems(a);
//		ft_printf("sa\n");
		rev_rotate_ab(a, 'a');
//		reverse_rotate_stack(a);
//		ft_printf("rra\n");
	}
	else if (a->arr[1] > a->arr[2])
	{
		swap_ab(a, 'a');
//		swap_elems(a);
//		ft_printf("sa\n");
	}
//	print_stack(a);
}

static void	sort_four(t_stack *a, t_stack *b)
{
	int largest;

	largest = a->arr[get_largest(a)];
	while (a->arr[a->top] != largest)
	{
		rotate_ab(a, 'a');
//		rotate_stack(a);
//		ft_printf("ra\n");
	}
	push_ab(a, b, 'b');
	sort_three(a);
	push_ab(a, b, 'a');
}

static void	sort_five(t_stack *a, t_stack *b)
{
	int largest;

//	print_stack(a);

	largest = a->arr[get_largest(a)];
	while (a->arr[a->top] != largest)
	{
		rotate_ab(a, 'a');
//		rotate_stack(a);
//		ft_printf("ra\n");
	}
	push_ab(a, b, 'b');
	sort_four(a, b);
	push_ab(a, b, 'a');

//	print_stack(a);
}

void		sort_small(t_stack *a, t_stack *b)
{
	if (a->top == 1)
		sort_two(a);
	else if	(a->top == 2)
		sort_three(a);
	else if (a->top == 3)
		sort_four(a, b);
	else if (a->top == 4)
		sort_five(a, b);
}
