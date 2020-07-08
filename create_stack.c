/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/08 12:10:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>

t_stack	*create_stack(unsigned int new_size)
{
	t_stack *new_stack;

	if (!(new_stack = (t_stack*)malloc(sizeof(t_stack))))
		exit (-1);
	new_stack->size = new_size;
	new_stack->top = -1;
	if (!(new_stack->arr = (int*)malloc(sizeof(int) * new_size)))
		exit (-1);
	return (new_stack);
}
