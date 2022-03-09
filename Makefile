# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:26:38 by kel-amra          #+#    #+#              #
#    Updated: 2022/03/09 21:07:21 by kel-amra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRCS = push_swap.c\
	   srcs/ft_listnew.c\
	   srcs/ft_listsize.c\
	   srcs/small_stack.c\
	   srcs/big_stack.c\
	   srcs/pushing_between_stacks.c\
	   srcs/stack_checker.c\
	   srcs/get_data.c\
	   srcs/msg_error.c\
	   srcs/push_to_a.c\
	   srcs/push_to_b.c\
	   srcs/sort_tab.c\
	   srcs/ft_atoi2.c\
	   srcs/sa_sb_ss.c\
	   srcs/pa_pb.c\
	   srcs/ra_rb_rr.c\
	   srcs/rra_rrb_rrr.c

SRCSB = bonus/checker_bonus.c\
	   	bonus/ft_listnew_bonus.c\
	   	bonus/ft_listsize_bonus.c\
		bonus/stack_checker_bonus.c\
		bonus/get_data_bonus.c\
		bonus/msg_error_bonus.c\
		bonus/sort_tab_bonus.c\
		bonus/ft_atoi2_bonus.c\
		bonus/sa_sb_ss_bonus.c\
		bonus/pa_pb_bonus.c\
		bonus/ra_rb_rr_bonus.c\
		bonus/rra_rrb_rrr_bonus.c\
		bonus/instraction_index_bonus.c\
		bonus/instractions_tab_bonus.c

NAME = push_swap

NAMEB = checker

HEADER = srcs/push_swap.h

HEADERB = bonus/checker_bonus.h

LIBFT = srcs/libft/libft.a

GET_NEXT_LINE = srcs/get_next_line/get_next_line.a

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(LIBFT) : mlibft

$(GET_NEXT_LINE) : mget_next_line

$(NAME) : $(LIBFT) $(SRCS) $(HEADER)
			gcc $(FLAGS) $(SRCS) $(LIBFT) -o $(NAME)

bonus : $(SRCS) $(LIBFT) $(HEADERB) $(GET_NEXT_LINE)
			gcc $(FLAGS) $(SRCS) $(LIBFT) $(GET_NEXT_LINE) -o $(NAMEB)

mlibft :
			make -C srcs/libft/

mget_next_line :
			make -C srcs/get_next_line/

clean :
			make clean -C srcs/get_next_line/
			make clean -C srcs/libft/
			rm -rf $(OBJECT)
			rm -rf $(OBJECTB)

fclean : clean
			make fclean -C srcs/libft/
			make fclean -C srcs/get_next_line/
			rm -rf $(NAME)
			rm -rf $(NAMEB)

re : fclean all