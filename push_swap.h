/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:53:53 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/19 18:10:39 by kel-amra         ###   ########.fr       */
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






#   endif