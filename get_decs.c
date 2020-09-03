/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_decs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:58:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/08/20 11:59:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>

#include "libft/libft.h"

void	get_decs(t_stack *stack)
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
	stack->first_dec = arr[stack->size / 10 - 1];
	stack->second_dec = arr[(stack->size / 10 * 2) - 1];
	stack->third_dec = arr[(stack->size / 10 * 3) - 1];
	stack->fourth_dec = arr[(stack->size / 10 * 4) - 1];
	stack->fifth_dec = arr[(stack->size / 10 * 5) - 1];
	stack->sixth_dec = arr[(stack->size / 10 * 6) - 1];
	stack->seventh_dec = arr[(stack->size / 10 * 7) - 1];
	stack->eighth_dec = arr[(stack->size / 10 * 8) - 1];
	stack->ninth_dec = arr[(stack->size / 10 * 9) - 1];
	free(arr);
}
