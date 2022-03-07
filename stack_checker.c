/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:11:43 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 13:46:58 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_checker(t_stack *tmp)
{
	t_node	*tmp_a;
	int		i;

	i = -1;
	tmp_a = tmp->stack_a;
	while (tmp_a != NULL)
	{
		if (tmp_a->content != tmp->stack_tmp[++i])
			return (1);
		tmp_a = tmp_a->next;
	}
	return (0);
}
