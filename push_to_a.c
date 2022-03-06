/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:26:27 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 13:07:17 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a_top(int index, t_stack *tmp)
{
	int	i;

	i = 0;
	if (index == 1)
	{
		sb(tmp);
		i = 1;
	}
	while (i < index)
	{
		if (i + 1 == index)
			sb(tmp);
		else
			rb(tmp);
		i++;
	}
	pa(tmp);
}

void	push_to_a_bottom(int index, t_stack *tmp)
{
	int	i;

	i = ft_listsize(tmp->stack_b);
	while (i > index)
	{
		rrb(tmp);
		i--;
	}
	pa(tmp);
}
