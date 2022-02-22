/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:07:21 by kel-amra          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/22 19:17:24 by marvin           ###   ########.fr       */
=======
/*   Updated: 2022/02/22 19:03:40 by kel-amra         ###   ########.fr       */
>>>>>>> f792e53262d014f67131eaf139099be01d6c66b1
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
void	small_stack(t_stack *tmp)
{
	int	first;
	int	second;
	int	third;

	first = tmp->stack_A->content;
	second = tmp->stack_A->next->content;
	third = tmp->stack_A->next->next->content;
	if (first > second && second > third && first > third)
	{
		sa(tmp);
		rra(tmp);
	}
	else if (first < second && second > third && first < third)
	{
		rra(tmp);
		sa(tmp);
	}
	else if (first > second && second < third && first < third)
		sa(tmp);
	else if (first < second && second > third && first > third)
		rra(tmp);
	else if (first > second && second < third && first > third)
		ra(tmp);
=======
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
>>>>>>> f792e53262d014f67131eaf139099be01d6c66b1
}