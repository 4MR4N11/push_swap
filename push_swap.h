/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:53:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/22 18:10:23 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
typedef struct s_node
{
	int			content;
	struct s_node	*next;
}	t_node;
typedef struct s_stack
{
    t_node *stack_A;
    t_node *stack_B;
    int		stack_size;
    int     msg_status;
}	t_stack;

t_node	*ft_listnew(int content);
int	ft_listsize(t_node *lst);
int error_msg(int ac, char **args);
int	A_is_sorted(int ac ,t_stack *tmp);
int	*sort_tab(int *tab, int size);
int	ft_listsize(t_node *lst);
void	small_stack(t_stack *tmp);
void	sa(t_stack *tmp);
void	sb(t_stack *tmp);
void	ss(t_stack *tmp);
void    pa(t_stack *tmp);
void    pb(t_stack *tmp);
void    ra(t_stack *tmp);
void    rb(t_stack *tmp);
void    rr(t_stack *tmp);
void    rra(t_stack *tmp);
void    rrb(t_stack *tmp);
void    rrr(t_stack *tmp);

#   endif