/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:09:10 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 12:21:39 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_stack *tmp)
{
	t_node	*node_tmp;
	t_node	*head;

	if (!tmp->stack_a || !tmp->stack_a->next)
		return ;
	head = tmp->stack_a->next;
	node_tmp = tmp->stack_a;
	while (tmp->stack_a->next != NULL)
	tmp->stack_a = tmp->stack_a->next;
	tmp->stack_a->next = node_tmp;
	node_tmp->next = NULL;
	tmp->stack_a = head;
}

void	rb(t_stack *tmp)
{
	t_node	*node_tmp;
	t_node	*head;

	if (!tmp->stack_b || !tmp->stack_b->next)
		return ;
	head = tmp->stack_b->next;
	node_tmp = tmp->stack_b;
	while (tmp->stack_b->next != NULL)
	tmp->stack_b = tmp->stack_b->next;
	tmp->stack_b->next = node_tmp;
	node_tmp->next = NULL;
	tmp->stack_b = head;
}

void	rr(t_stack *tmp)
{
	ra(tmp);
	rb(tmp);
}
