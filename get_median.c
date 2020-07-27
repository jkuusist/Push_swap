/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:26:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/27 11:34:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>
#include <limits.h>

int	get_median(t_stack *stack)
{
	int *arr;
	int i;
	int median;

	if (!(arr = (int*)malloc(sizeof(int) * stack->size)))
		return (INT_MIN);
	i = 0;
	while (i < stack->size)
	{
		arr[i] = stack->arr[i];
		i++;
	}
	quicksort(arr, 0, stack->size);
	median = arr[stack->size / 2];
	return (median);
}
