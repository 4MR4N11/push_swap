/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:10:52 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 17:21:24 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (tmp->msg_status == 0)
		write(1, "rra\n", 4);
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
	if (tmp->msg_status == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *tmp)
{
	tmp->msg_status = 1;
	write(1, "rrr\n", 4);
	rra(tmp);
	rrb(tmp);
	tmp->msg_status = 0;
}
