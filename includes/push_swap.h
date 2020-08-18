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
	int				median;
	int				first_quart;
	int				second_quart;
	int				third_quart;
	int				small_rot;
	int				small_rrot;
	int				large_rot;
	int				large_rrot;
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
int				convert_args(t_stack *stack_a, t_stack *stack_b,
				char **argv, int argc);
int				stack_peek(t_stack *stack);
void			sort_stack(t_stack *a, t_stack *b);
int				get_median(t_stack *stack);
void			quicksort(int *arr, int start, int end);
int				get_smallest(t_stack *stack);
int				get_largest(t_stack *stack);
void			do_least_moves(t_stack *a, t_stack *b);
void			print_stack(t_stack *stack);
void			push_ab(t_stack *a, t_stack *b, char id, int is_print);
void			sort_small(t_stack *a, t_stack *b);
void			rotate_ab(t_stack *stack, char id, int is_print);
void			rev_rotate_ab(t_stack *stack, char id, int is_print);
void			swap_ab(t_stack *stack, char id, int is_print);
void			sort_large(t_stack *a, t_stack *b);
void			get_quarts(t_stack *stack);
void			checker_print(int argc, char **argv);
void			print_stacks(t_stack *a, t_stack *b);
void			handle_error(t_stack* a, t_stack *b);
int				check_input(char *s);
void			handle_input(char *s, t_stack *a, t_stack *b);
void			handle_instructions(t_stack *a, t_stack *b, int is_print);
void			checker_arg(int argc, char** argv);

#endif
