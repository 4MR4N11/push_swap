/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 13:34:50 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_stack(t_stack *tmp)
{
	if (tmp->stack_a->content > tmp->stack_a->next->content)
		sa(tmp);
}

void	three_stack(t_stack *tmp)
{
	tmp->first = tmp->stack_a->content;
	tmp->second = tmp->stack_a->next->content;
	tmp->third = tmp->stack_a->next->next->content;
	if (tmp->first > tmp->second
		&& tmp->first < tmp->third && tmp->second < tmp->third)
		sa(tmp);
	else if (tmp->first > tmp->second
		&& tmp->second > tmp->third && tmp->first > tmp->third)
	{
		sa(tmp);
		rra(tmp);
	}
	else if (tmp->first > tmp->second
		&& tmp->second < tmp->third && tmp->third < tmp->first)
		ra(tmp);
	else if (tmp->first < tmp->second
		&& tmp->second > tmp->third && tmp->third > tmp->first)
	{
		sa(tmp);
		ra(tmp);
	}
	else if (tmp->first < tmp->second
		&& tmp->second > tmp->third && tmp->third < tmp->first)
		rra(tmp);
}

void	four_stack(t_stack *tmp)
{
	pb(tmp);
	three_stack(tmp);
	pa(tmp);
	tmp->first = tmp->stack_a->content;
	tmp->second = tmp->stack_a->next->content;
	tmp->third = tmp->stack_a->next->next->content;
	tmp->fourth = tmp->stack_a->next->next->next->content;
	if (tmp->first > tmp->second && tmp->first < tmp->third)
		sa(tmp);
	else if (tmp->first > tmp->third && tmp->first < tmp->fourth)
	{
		rra(tmp);
		sa(tmp);
		ra(tmp);
		ra(tmp);
	}
	else if (tmp->first > tmp->fourth)
		ra(tmp);
}

void	five_stack(t_stack *tmp)
{
	pb(tmp);
	four_stack(tmp);
	pa(tmp);
	get_data(tmp, 0);
	if (tmp->first > tmp->second && tmp->first < tmp->third)
		sa(tmp);
	else if (tmp->first > tmp->third && tmp->first < tmp->fourth)
	{
		sa(tmp);
		ra(tmp);
		sa(tmp);
		rra(tmp);
	}
	else if (tmp->first > tmp->fourth && tmp->first < tmp->fifth)
	{
		rra(tmp);
		sa(tmp);
		ra(tmp);
		ra(tmp);
	}
	else if (tmp->first > tmp->fifth)
		ra(tmp);
}
