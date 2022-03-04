/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 14:14:41 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int		stack_checker(t_stack *tmp)
{
	t_node	*tmp_a;
	int		i;
	
	i = -1;
	tmp_a = tmp->stack_A;
	while (tmp_a != NULL)
    {
		if (tmp_a->content != tmp->stack_tmp[++i])
			return (1);
        tmp_a = tmp_a->next;
    }
	return (0);
}

void	two_stack(t_stack *tmp)
{
	if (tmp->stack_A->content > tmp->stack_A->next->content)
		sa(tmp);
}

void	three_stack(t_stack *tmp)
{
	int	first;
	int	second;
	int	third;

	if (!stack_checker(tmp))
		return ;
	first = tmp->stack_A->content;
	second = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	if (first > second && first < third && second < third)
		sa(tmp);
	else if (first > second && second > third && first > third)
	{
		sa(tmp);
		rra(tmp);
	}
	else if (first > second && second < third && third < first)
		ra(tmp);
	else if (first < second && second > third && third > first)
	{
		sa(tmp);
		ra(tmp);
	}
	else if(first < second && second > third && third < first)
		rra(tmp);
}

void	four_stack(t_stack *tmp)
{
	int	first;
	int second;
	int third;
	int fourth;

	if (!stack_checker(tmp))
		return ;
	pb(tmp);
	three_stack(tmp);
	pa(tmp);
	first = tmp->stack_A->content;
	second = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	fourth = tmp->stack_A->next->next->next->content;
	if (first > second && first < third)
		sa(tmp);
	else if (first > third && first < fourth)
	{
		rra(tmp);
		sa(tmp);
		ra(tmp);
		ra(tmp);
	}
	else if (first > fourth)
		ra(tmp);
}

void	five_stack(t_stack *tmp)
{
	if (!stack_checker(tmp))
		return ;
	int	first;
	int second;
	int third;
	int fourth;
	int fifth;
	
	pb(tmp);
	four_stack(tmp);
	pa(tmp);
	first = tmp->stack_A->content;
	second = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	fourth = tmp->stack_A->next->next->next->content;
	fifth = tmp->stack_A->next->next->next->next->content;
	if (first > second && first < third)
		sa(tmp);
	else if (first > third && first < fourth)
	{
		sa(tmp);
		ra(tmp);
		sa(tmp);
		rra(tmp);
	}
	else if (first > fourth && first < fifth)
	{
		rra(tmp);
		sa(tmp);
		ra(tmp);
		ra(tmp);
	}
	else if (first > fifth)
		ra(tmp);
}
