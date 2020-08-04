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
	int				smallest;
	int				largest;
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
int				check_arg(char *arg);
int				convert_args(t_stack *stack_a, t_stack *stack_b, char **argv, int argc);
int				stack_peek(t_stack *stack);
void			sort_stack(t_stack *a, t_stack *b);
int				get_median(t_stack *stack);
void			quicksort(int *arr, int start, int end);
int				get_smallest(t_stack *stack);
int				get_largest(t_stack *stack);
void			do_least_moves(t_stack *a, t_stack *b, int is_largest);

#endif
