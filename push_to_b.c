/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:26:48 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 20:31:11 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b_top(int index, t_stack *tmp)
{
	int	i;

	i = 0;
	while (i < index)
	{
		ra(tmp);
		i++;
	}
	if(tmp->stack_B && (tmp->stack_B->content < tmp->stack_A->content))
		sb(tmp);
	pb(tmp);
}

void	push_to_b_bottom(int index, t_stack *tmp)
{
	int	i;

	i = ft_listsize(tmp->stack_A);
	while (i > index)
	{
		rra(tmp);
		i--;
	}
	if(tmp->stack_B && (tmp->stack_B->content < tmp->stack_A->content))
		sb(tmp);
	pb(tmp);
}
