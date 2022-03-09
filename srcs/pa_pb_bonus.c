/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:06:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 12:22:41 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pa(t_stack *tmp)
{
	t_node	*node_tmp1;
	t_node	*node_tmp2;

	if (!tmp->stack_b)
		return ;
	node_tmp1 = tmp->stack_a;
	node_tmp2 = tmp->stack_b->next;
	tmp->stack_a = tmp->stack_b;
	tmp->stack_b = node_tmp2;
	tmp->stack_a->next = node_tmp1;
}

void	pb(t_stack *tmp)
{
	t_node	*node_tmp1;
	t_node	*node_tmp2;

	if (!tmp->stack_a)
		return ;
	if (tmp->stack_b)
	{
		node_tmp1 = tmp->stack_a->next;
		node_tmp2 = tmp->stack_b;
		tmp->stack_b = tmp->stack_a;
		tmp->stack_a = node_tmp1;
		tmp->stack_b->next = node_tmp2;
		return ;
	}
	node_tmp1 = tmp->stack_a->next;
	tmp->stack_b = tmp->stack_a;
	tmp->stack_a = node_tmp1;
	tmp->stack_b->next = NULL;
}
