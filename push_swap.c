/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:52:59 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/19 18:11:46 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	A_is_sorted(int ac ,t_stack *tmp)
{
	int i;
	int j;
	
	j = 1;
	i = 0;
	while(i < ac-2)
	{
		if((tmp->stack_A[i] > tmp->stack_A[j]))
			return 1;
		i++;
		j++;
	}
	return 0;
}

int error_msg(int ac, char **args)
{
	int i;

	i = 1;
	if(ac < 3)
		return (ft_printf("Error\n"),1);
    while(args[i])
	{
		if(ft_atoi(args[i]))
            i++;
        else
        {
            return(ft_printf("Error\n"),1);
        }
	}
	return 0;
}

int main(int ac, char **av)
{
    int i;
    int j;
	t_stack tmp;
    i = 0;
    j = -1;
	if(error_msg(ac,av) == 1)
		return (1);
    tmp.stack_A = malloc(sizeof(int) * ac);
	tmp.stack_B = malloc(sizeof(int) * ac);
	while(av[++i])
	{
		tmp.stack_A[++j] = ft_atoi(av[i]);
	}
	if(!A_is_sorted(ac, &tmp))
	{
		ft_printf("A is sorted");
		free(tmp.stack_A);
		free(tmp.stack_B);
		return(0);
	}
	if(ac <= 5)
		return(small_stack(&tmp));
	ft_printf("A is not sorted");
	return 0;
}