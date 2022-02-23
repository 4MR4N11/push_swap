# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:26:38 by kel-amra          #+#    #+#              #
#    Updated: 2022/02/23 20:17:44 by kel-amra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = push_swap.c\
	   ft_listnew.c\
	   ft_listsize.c\
	   small_stack.c\
	   ft_atoi2.c\
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