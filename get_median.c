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
	while (i < (int)stack->size)
	{
		arr[i] = stack->arr[i];
		i++;
	}
	quicksort(arr, 0, stack->size);
	if (stack->size % 2)
		median = arr[stack->size / 2];
	else
		median = arr[(stack->size / 2) - 1];
	free(arr);
	return (median);
}
