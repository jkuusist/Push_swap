/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 11:01:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/02 11:22:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_smallest(t_stack *stack)
{
	int i;
	int res;

	if (stack->top != -1)
	{
		i = 1;
		res = 0;
		while (i < stack->size)
		{
			if (stack->arr[i] < stack->arr[res])
				res = i;
			i++;
		}
		return (res);
	}
}
