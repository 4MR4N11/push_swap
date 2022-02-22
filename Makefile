# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 21:23:06 by kel-amra          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/02/22 19:18:04 by marvin           ###   ########.fr        #
=======
#    Updated: 2022/02/22 18:10:05 by kel-amra         ###   ########.fr        #
>>>>>>> f792e53262d014f67131eaf139099be01d6c66b1
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c\
	   ft_listnew.c\
	   ft_listsize.c\
	   small_stack.c\
	   sa_sb_ss.c\
	   pa_pb.c\
	   ra_rb_rr.c\
	   rra_rrb_rrr.c

NAME = push_swap

HEADER = push_swap.h

OBJECT = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT) $(HEADER)
			make -C ft_printf/
			make -C libft/
			gcc $(FLAGS) $(OBJECT) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

%.o : %.c
			gcc $(FLAGS) -c $<

clean :
			make clean -C ft_printf/
			make clean -C libft/
			rm -rf $(OBJECT)

fclean : clean
			make fclean -C ft_printf/
			make fclean -C libft/
			rm -rf $(NAME)

re : fclean all