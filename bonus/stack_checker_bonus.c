/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:11:43 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 11:58:34 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
