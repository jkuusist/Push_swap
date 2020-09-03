/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_quints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:45:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 12:45:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>

#include "libft/libft.h"

void	get_quints(t_stack *stack)
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
	stack->first_quint = arr[stack->size / 5 - 1];
	stack->second_quint = arr[(stack->size / 5) * 2 - 1];
	stack->third_quint = arr[(stack->size / 5) * 3 - 1];
	stack->fourth_quint = arr[(stack->size / 5) * 4 - 1];
	free(arr);
}
