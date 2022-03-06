# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:26:38 by kel-amra          #+#    #+#              #
#    Updated: 2022/03/06 12:06:17 by kel-amra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = push_swap.c\
	   ft_listnew.c\
	   ft_listsize.c\
	   small_stack.c\
	   big_stack.c\
	   pushing_between_stacks.c\
	   stack_checker.c\
	   get_data.c\
	   msg_error.c\
	   push_to_a.c\
	   push_to_b.c\
	   sort_tab.c\
	   ft_atoi2.c\
	   sa_sb_ss.c\
	   pa_pb.c\
	   ra_rb_rr.c\
	   rra_rrb_rrr.c

NAME = push_swap

HEADER = push_swap.h

LIBFT = libft/libft.a

OBJECT = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(LIBFT) : mlibft

$(NAME) : $(LIBFT) $(OBJECT) $(HEADER)
			gcc $(FLAGS) $(OBJECT) $(LIBFT) -o $(NAME)

mlibft :
			make -C libft/

%.o : %.c
			gcc $(FLAGS) -c $<

clean :
			make clean -C libft/
			rm -rf $(OBJECT)

fclean : clean
			make fclean -C libft/
			rm -rf $(NAME)

re : fclean all