# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/09 11:32:00 by jkuusist          #+#    #+#              #
#    Updated: 2020/07/09 11:32:00 by jkuusist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

HEDR = includes/push_swap.h

LIBFT = ./libft

CHECKER_SRCS = checker.c check_arg.c convert_args.c create_stack.c destroy_stack.c has_duplicate.c is_sorted.c print_stack.c push_ab.c reverse_rotate_stack.c rev_rotate_ab.c rotate_ab.c rotate_stack.c stack_pop.c stack_push.c swap_ab.c swap_elems.c

PUSH_SWAP_SRCS = push_swap.c check_arg.c convert_args.c create_stack.c destroy_stack.c do_least_moves.c get_largest.c get_median.c get_quarts.c get_smallest.c has_duplicate.c is_sorted.c print_stack.c push_ab.c quicksort.c reverse_rotate_stack.c rev_rotate_ab.c rotate_ab.c rotate_stack.c sort_large.c sort_small.c sort_stack.c stack_peek.c stack_pop.c stack_push.c swap_ab.c swap_elems.c

CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)

PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc -g -Wall -Wextra -Werror $(CHECKER_SRCS) $(LIBFT)/libft.a -o $(NAME)
	gcc -g -Wall -Wextra -Werror $(PUSH_SWAP_SRCS) $(LIBFT)/libft.a -o push_swap

clean:
	rm -f $(CHECKER_OBJS)
	rm -f $(PUSH_SWAP_OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	rm -f push_swap
	make fclean -C $(LIBFT)

re: fclean all
