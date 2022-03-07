/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:06 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 13:57:44 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "libft/libft.h"
# include "get_next_line/get_next_line.h"

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
	char	**instractions;
	int		*stack_tmp;
	int		stack_size;
	int		msg_status;
}	t_stack;

# define MAX_INT 2147483647
# define MIN_INT -2147483648

t_node		*ft_listnew(int content);
int			ft_listsize(t_node *lst);
void		instraction_index(t_stack *tmp, int index);
int			instraction_checker(t_stack *tmp, char *str);
char		**instractions_tab(void);
int			error_msg(char **av, t_stack *tmp);
void		get_data(t_stack *tmp);
void		checker(t_stack *tmp, int list_size, int is_a);
int			A_is_sorted(int ac, t_stack *tmp);
int			*sort_tab(char **tab, t_stack *tmpp);
void		free_data(char **str_tmp, t_stack *tmp);
void		list_fill(char **av, t_stack *tmp);
int			stack_checker(t_stack *tmp);
long long	ft_atoi2(const char *str);
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
