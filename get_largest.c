/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_largest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 11:24:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/31 11:24:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_smallest(t_stack *stack)
{
	int i;
	int res;

	if (stack->top != -1)
	{
		i = 1;
		res = stack->arr[0];
		while (i < stack->size)
		{
			if (stack->arr[i] > res)
				res = stack->arr[i];
			i++;
		}
		return (res);
	}
}
