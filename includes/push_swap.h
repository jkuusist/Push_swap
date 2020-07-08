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

#endif
