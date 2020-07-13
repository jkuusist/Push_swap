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

CHECKER_SRCS = checker.c create_stack.c destroy_stack.c is_sorted.c reverse_rotate_stack.c rotate_stack.c stack_pop.c stack_push.c swap_elems.c

CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)
 
all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc -g -Wall -Wextra -Werror $(CHECKER_SRCS) $(LIBFT)/libft.a -o $(NAME)

clean:
	rm -f $(CHECKER_OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all
