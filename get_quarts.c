/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quarts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:59:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/10 11:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>

void	get_quarts(t_stack *stack)
{
	int *arr;
	int i;

	if (!(arr = (int*)malloc(sizeof(int) * stack->size)))
		return ;
	i = 0;
	while (i < (int)stack->size)
	{
		arr[i] = stack->arr[i];
		i++;
	}
	quicksort(arr, 0, stack->size);
	stack->first_quart = arr[stack->size / 4];
	stack->second_quart = arr[stack->size / 2];
	stack->third_quart = arr[(stack->size / 4) + (stack->size / 2)];
	free(arr);
}
