/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/23 22:21:49 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int		stack_checker(t_stack *tmp)
{
	t_node *tmp_a = tmp->stack_A;
	t_node *tmp_tmp = tmp->stack_tmp;
	while(tmp_a != NULL)
    {
		if(tmp_a->content != tmp_tmp->content)
			return (1);
        tmp_tmp = tmp_tmp->next;
        tmp_a = tmp_a->next;
    }
	return (0);
}

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
	
}