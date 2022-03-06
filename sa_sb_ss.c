/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:12:01 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 12:17:34 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *tmp)
{
	int	tmp_content;

	if (!tmp->stack_a || tmp->stack_a->next == NULL)
		return ;
	tmp_content = tmp->stack_a->content;
	tmp->stack_a->content = tmp->stack_a->next->content;
	tmp->stack_a->next->content = tmp_content;
	if (tmp->msg_status == 0)
		write(1, "sa\n", 3);
}

void	sb(t_stack *tmp)
{
	int	tmp_content;

	if (tmp->stack_b && tmp->stack_b->next != NULL)
	{
		tmp_content = tmp->stack_b->content;
		tmp->stack_b->content = tmp->stack_b->next->content;
		tmp->stack_b->next->content = tmp_content;
		if (tmp->msg_status == 0)
			write(1, "sb\n", 3);
	}
	return ;
}

void	ss(t_stack *tmp)
{
	tmp->msg_status = 1;
	write(1, "ss\n", 3);
	sa(tmp);
	sb(tmp);
	tmp->msg_status = 0;
}
