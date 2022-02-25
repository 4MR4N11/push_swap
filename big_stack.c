/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:53:06 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/25 22:47:47 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	top_half(int index, t_stack *tmp)
{
	int i = 0;
    while(i < index)
	{
		ra(tmp);
		i++;
	}
	pb(tmp);
} 

static void	bottom_half(int index, t_stack *tmp)
{
    while(index < tmp->stack_size)
	{
		rra(tmp);
		index++;
	}
	pb(tmp);
}

void	big_stack(t_stack *tmp)
{
	int     i;
    int     index;
	t_node *node;
	int		is_min;
	
	node = tmp->stack_A;
    index = 0;
    i = 0;
    while(i < tmp->stack_size)
    {
		is_min = 0;
        if(node->content == tmp->stack_tmp[i])
        {
            if(index <= (tmp->stack_size / 2))
            {
                top_half(index, tmp);
				index = -1;
            }
            else
            {
                bottom_half(index, tmp);
				index = -1;
            }
			is_min = 1;
			node = tmp->stack_A;
			i++;
        }
		if(!is_min)
			node = node->next;
        index++;
    }
    
}