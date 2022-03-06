/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:06 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 14:07:35 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;
typedef struct s_stack
{
	t_node	*stack_a;
	t_node	*stack_b;
	t_node	*lst_tmp;
	t_node	*head;
	int		first;
	int		second;
	int		third;
	int		fourth;
	int		fifth;
	int		*stack_tmp;
	int		stack_size;
	int		msg_status;
	int		index;
	int		*chunk;
	int		sorted_stack_index;
}	t_stack;

# define MAX_INT 2147483647
# define MIN_INT -2147483648

t_node		*ft_listnew(int content);
int			ft_listsize(t_node *lst);
int			error_msg(char **av, t_stack *tmp);
void		get_data(t_stack *tmp, int i);
void		two_stack(t_stack *tmp);
void		three_stack(t_stack *tmp);
void		four_stack(t_stack *tmp);
void		five_stack(t_stack *tmp);
int			big_stack(t_stack *tmp);
void		checker(t_stack *tmp, int list_size, int is_a);
int			A_is_sorted(int ac, t_stack *tmp);
int			*sort_tab(char **tab, t_stack *tmpp);
void		free_data(char **str_tmp, t_stack *tmp);
void		list_fill(char **av, t_stack *tmp);
int			stack_checker(t_stack *tmp);
long long	ft_atoi2(const char *str);
void		push_to_a_top(int index, t_stack *tmp);
void		push_to_b_top(int index, t_stack *tmp);
void		push_to_a_bottom(int index, t_stack *tmp);
void		push_to_b_bottom(int index, t_stack *tmp);
void		sa(t_stack *tmp);
void		sb(t_stack *tmp);
void		ss(t_stack *tmp);
void		pa(t_stack *tmp);
void		pb(t_stack *tmp);
void		ra(t_stack *tmp);
void		rb(t_stack *tmp);
void		rr(t_stack *tmp);
void		rra(t_stack *tmp);
void		rrb(t_stack *tmp);
void		rrr(t_stack *tmp);

#	endif
