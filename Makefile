# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:26:38 by kel-amra          #+#    #+#              #
#    Updated: 2022/03/04 21:31:01 by kel-amra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = push_swap.c\
	   ft_listnew.c\
	   ft_listsize.c\
	   small_stack.c\
	   big_stack.c\
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

FT_PRINTF = ft_printf/libftprintf.a

OBJECT = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(LIBFT) : mlibft

$(FT_PRINTF) : mft_printf

$(NAME) : $(LIBFT) $(FT_PRINTF) $(OBJECT) $(HEADER)
			gcc $(FLAGS) $(OBJECT) $(LIBFT) $(FT_PRINTF) -o $(NAME)

mlibft :
			make -C libft/

mft_printf :
			make -C ft_printf/

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