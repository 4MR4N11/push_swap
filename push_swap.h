/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:53:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/20 21:47:48 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
typedef struct s_stack
{
    int	*stack_A;
	int	*stack_B;
    int *index;
    int *copy;
}	t_stack;
typedef struct s_node
{
	int			content;
	struct s_node	*next;
}	t_node;
t_node	*ft_listnew(int content);
int error_msg(int ac, char **args);
int	A_is_sorted(int ac ,t_stack *tmp);
int	*sort_tab(int *tab, int size);





#   endif