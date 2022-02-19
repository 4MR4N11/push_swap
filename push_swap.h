/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:53:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/19 22:36:44 by marvin           ###   ########.fr       */
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
}	t_stack;
int error_msg(int ac, char **args);
int	A_is_sorted(int ac ,t_stack *tmp);
int	*sort_tab(int *tab, int size);





#   endif