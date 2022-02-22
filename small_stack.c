/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/22 19:17:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_stack(t_stack *tmp)
{
	int	first;
	int	second;
	int	third;

	first = tmp->stack_A->content;
	second = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	if (first > second && second > third && first > third)
	{
		sa(tmp);
		rra(tmp);
	}
	else if (first < second && second > third && first < third)
	{
		rra(tmp);
		sa(tmp);
	}
	else if (first > second && second < third && first < third)
		sa(tmp);
	else if (first < second && second > third && first > third)
		rra(tmp);
	else if (first > second && second < third && first > third)
		ra(tmp);
}