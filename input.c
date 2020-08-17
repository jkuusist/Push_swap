/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 12:50:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/17 12:50:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "libft/libft.h"

int		check_input(char *s)
{
	if (!ft_strcmp(s, "sa"))
		return (1);
	else if (!ft_strcmp(s, "sb"))
		return (1);
	else if (!ft_strcmp(s, "ss"))
		return (1);
	else if (!ft_strcmp(s, "pa"))
		return (1);
	else if (!ft_strcmp(s, "pb"))
		return (1);
	else if (!ft_strcmp(s, "ra"))
		return (1);
	else if (!ft_strcmp(s, "rb"))
		return (1);
	else if (!ft_strcmp(s, "rr"))
		return (1);
	else if (!ft_strcmp(s, "rra"))
		return (1);
	else if (!ft_strcmp(s, "rrb"))
		return (1);
	else if (!ft_strcmp(s, "rrr"))
		return (1);
	else
		return (0);
}

void	handle_input(char *s, t_stack *a, t_stack *b)
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
}
