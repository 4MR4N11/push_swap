/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:12:01 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 12:21:22 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	sa(t_stack *tmp)
{
	int	tmp_content;

	if (!tmp->stack_a || tmp->stack_a->next == NULL)
		return ;
	tmp_content = tmp->stack_a->content;
	tmp->stack_a->content = tmp->stack_a->next->content;
	tmp->stack_a->next->content = tmp_content;
}

void	sb(t_stack *tmp)
{
	int	tmp_content;

	if (tmp->stack_b && tmp->stack_b->next != NULL)
	{
		tmp_content = tmp->stack_b->content;
		tmp->stack_b->content = tmp->stack_b->next->content;
		tmp->stack_b->next->content = tmp_content;
	}
	return ;
}

void	ss(t_stack *tmp)
{
	sa(tmp);
	sb(tmp);
}
