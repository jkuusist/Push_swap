/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:03:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/07/08 12:03:00 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stack
{
	unsigned int	size;
	int				top;
	int				*arr;
}				t_stack;

t_stack			*create_stack(unsigned int new_size);
void			destroy_stack(t_stack *stack);
void			stack_push(t_stack *stack, int num);
int				stack_pop(t_stack *stack);
void			swap_elems(t_stack *stack);
void			rotate_stack(t_stack *stack);
void			reverse_rotate_stack(t_stack *stack);
int				is_sorted(t_stack *stack);
int				has_duplicate(t_stack *stack);

#endif
