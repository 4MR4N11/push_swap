/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/22 19:03:40 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void small_stack(t_stack *tmp)
{
    int i = 0;
    if(tmp->stack_size == 2)
    {
        if(tmp->stack_A->content > tmp->stack_A->next->content)
            sa(tmp);
    }
    if(tmp->stack_size == 3)
    {
        while(i++ < 2)
        {
            if(tmp->stack_A->content > tmp->stack_A->next->content)
            {
                sa(tmp);
            }
            if(tmp->stack_A->next->content > tmp->stack_A->next->next->content)
            {
                
            }
        }
    }
}