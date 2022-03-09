/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction_index_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:44:45 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 13:58:52 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	instraction_index(t_stack *tmp, int index)
{
	if (index == 0)
		sa(tmp);
	else if (index == 1)
		sb(tmp);
	else if (index == 2)
		ss(tmp);
	else if (index == 3)
		pa(tmp);
	else if (index == 4)
		pb(tmp);
	else if (index == 5)
		ra(tmp);
	else if (index == 6)
		rb(tmp);
	else if (index == 7)
		rr(tmp);
	else if (index == 8)
		rra(tmp);
	else if (index == 9)
		rrb(tmp);
	else if (index == 10)
		rrr(tmp);
}

int	instraction_checker(t_stack *tmp, char *str)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (tmp->instractions[++i])
	{
		j = 1;
		if (ft_strncmp(str, tmp->instractions[i], ft_strlen(str)) == 0)
		{
			instraction_index(tmp, i);
			i = 10;
			j = 0;
		}
	}
	return (j);
}
