/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:10:52 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 12:21:31 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rra(t_stack *tmp)
{
	t_node	*node_tmp;
	t_node	*head;

	if (!tmp->stack_a || !tmp->stack_a->next)
		return ;
	head = tmp->stack_a;
	while (tmp->stack_a->next != NULL)
	{
	node_tmp = tmp->stack_a;
	tmp->stack_a = tmp->stack_a->next;
	}
	tmp->stack_a->next = head;
	node_tmp->next = NULL;
}

void	rrb(t_stack *tmp)
{
	t_node	*node_tmp;
	t_node	*head;

	if (!tmp->stack_b || !tmp->stack_b->next)
		return ;
	head = tmp->stack_b;
	while (tmp->stack_b->next != NULL)
	{
	node_tmp = tmp->stack_b;
	tmp->stack_b = tmp->stack_b->next;
	}
	tmp->stack_b->next = head;
	node_tmp->next = NULL;
}

void	rrr(t_stack *tmp)
{
	rra(tmp);
	rrb(tmp);
}
