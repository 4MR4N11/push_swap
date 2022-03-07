# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:26:38 by kel-amra          #+#    #+#              #
#    Updated: 2022/03/07 13:37:48 by kel-amra         ###   ########.fr        #
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

SRCSB = checker_bonus.c\
	   	ft_listnew_bonus.c\
	   	ft_listsize_bonus.c\
		stack_checker_bonus.c\
		get_data_bonus.c\
		msg_error_bonus.c\
		sort_tab_bonus.c\
		ft_atoi2_bonus.c\
		sa_sb_ss_bonus.c\
		pa_pb_bonus.c\
		ra_rb_rr_bonus.c\
		rra_rrb_rrr_bonus.c\
		instraction_index_bonus.c\
		instractions_tab_bonus.c

NAME = push_swap

NAMEB = checker

HEADER = push_swap.h

HEADERB = checker_bonus.h

LIBFT = libft/libft.a

GET_NEXT_LINE = get_next_line/get_next_line.a

OBJECT = $(SRCS:.c=.o)

OBJECTB = $(SRCSB:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(LIBFT) : mlibft

$(GET_NEXT_LINE) : mget_next_line

$(NAME) : $(LIBFT) $(OBJECT) $(HEADER)
			gcc $(FLAGS) $(OBJECT) $(LIBFT) -o $(NAME)

bonus : $(OBJECTB) $(LIBFT) $(HEADERB) $(GET_NEXT_LINE)
			gcc $(FLAGS) $(OBJECTB) $(LIBFT) $(GET_NEXT_LINE) -o $(NAMEB)

mlibft :
			make -C libft/

mget_next_line :
			make -C get_next_line/

%.o : %.c
			gcc $(FLAGS) -c $<

clean :
			make clean -C get_next_line/
			make clean -C libft/
			rm -rf $(OBJECT)
			rm -rf $(OBJECTB)

fclean : clean
			make fclean -C libft/
			make fclean -C get_next_line/
			rm -rf $(NAME)
			rm -rf $(NAMEB)

re : fclean all