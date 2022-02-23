/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/23 17:35:04 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	two_stack(t_stack *tmp)
{
	if(tmp->stack_A->content > tmp->stack_A->next->content)
		sa(tmp);
}

void	three_stack(t_stack *tmp)
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

void	five_four_stack(t_stack *tmp)
{
	int	frst;
	int secnd;
	int third;
	int fourth;
	int fifth;

	if(tmp->stack_size == 4)
		pb(tmp);
	if(tmp->stack_size == 5)
	{
		pb(tmp);
		pb(tmp);
	}
	three_stack(tmp);
	frst = tmp->stack_A->content;
	secnd = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	fourth = tmp->stack_B->content;
	pa(tmp);
	if(fourth > third)
		ra(tmp);
	else if(fourth > frst && fourth < secnd)
		sa(tmp);
	else if(fourth > secnd && fourth < third)
	{
		rra(tmp);
		sa(tmp);
		ra(tmp);
		ra(tmp);
	}
	frst = tmp->stack_A->content;
	secnd = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	fourth = tmp->stack_A->next->next->next->content;
	if(tmp->stack_B && tmp->stack_B->content)
	{
		fifth = tmp->stack_B->content;
		pa(tmp);
		if(fifth > fourth)
			ra(tmp);
		else if(fifth > frst && fifth < secnd)
			sa(tmp);
		else if(fifth > secnd && fifth < third)
		{
			sa(tmp);
			ra(tmp);
			sa(tmp);
			rra(tmp);
		}
		else if(fifth > third && fifth < fourth)
		{
			rra(tmp);
			sa(tmp);
			ra(tmp);
			ra(tmp);
		}
	}
}