/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing_between_stacks.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:47:13 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/05 13:51:59 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	pushing_a(t_stack *tmp, int list_size)
{
	if (tmp->index <= (list_size / 2))
	{
		push_to_a_top(tmp->index, tmp);
		tmp->index = -1;
	}
	else
	{
		push_to_a_bottom(tmp->index, tmp);
		tmp->index = -1;
	}
}

static	void	pushing_b(t_stack *tmp, int list_size)
{
	if (tmp->index <= (list_size / 2))
	{
		push_to_b_top(tmp->index, tmp);
		tmp->index = -1;
	}
	else
	{
		push_to_b_bottom(tmp->index, tmp);
		tmp->index = -1;
	}
}

void	checker(t_stack *tmp, int list_size, int is_a)
{
	if (is_a)
		pushing_a(tmp, list_size);
	else
		pushing_b(tmp, list_size);
}
