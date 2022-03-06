/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:44:56 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 13:33:18 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_data(t_stack *tmp, int i)
{
	if (i == 1)
	{
		tmp->index = 0;
		tmp->chunk = NULL;
		tmp->sorted_stack_index = 0;
		tmp->stack_size = ft_listsize(tmp->stack_a);
		tmp->msg_status = 0;
		tmp->stack_b = NULL;
	}
	else
	{
		tmp->first = tmp->stack_a->content;
		tmp->second = tmp->stack_a->next->content;
		tmp->third = tmp->stack_a->next->next->content;
		tmp->fourth = tmp->stack_a->next->next->next->content;
		tmp->fifth = tmp->stack_a->next->next->next->next->content;
	}
}
