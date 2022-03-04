/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:26:27 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 20:33:33 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a_top(int index, t_stack *tmp)
{
	int	i;

	i = 0;
	while (i < index)
	{
		rb(tmp);
		i++;
	}
	pa(tmp);
}

void	push_to_a_bottom(int index, t_stack *tmp)
{
	int	i;

	i = ft_listsize(tmp->stack_B);
	while (i > index)
	{
		rrb(tmp);
		i--;
	}
	if(tmp->stack_B->content > tmp->stack_B->content)
		sa(tmp);
	pa(tmp);
}
