/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:48 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 17:53:44 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    free_data(char **tmp)
{
    int i = -1;
    while(tmp[++i])
    {
        free(tmp[i]);
        tmp[i] = NULL;
    }
    free(tmp);
    tmp = NULL;
}

int arg_isdigit(char **av)
{
    int		i;
	int		j;
	int		k;
	char	**tmp;

	k = -1;
	i = 0;
	j = -1;
	while (av[++i])
	{
		tmp = ft_split(av[i], ' ');
		while (tmp && tmp[++j])
		{
			while (tmp[j][++k])
			{
				if (tmp[j][k] == '-' || tmp[j][k] == '+')
					{
						if (tmp[j][k + 1] < 48 || tmp[j][k + 1] > 57)
							return (1);
					}
				if ((tmp[j][k] < 48 || tmp[j][k] > 57) &&
					(tmp[j][k] != '-' && tmp[j][k] != '+'))
						return (1);
			}
			if((ft_atoi2(tmp[j]) > 2147483647) || (ft_atoi2(tmp[j]) < -2147483648))
				return (1);
			k = -1;
		}
		free_data(tmp);
		j = -1;
	}
	return (0);	
}

t_node *tab_fill(char **av)
{
    char **tmp;
    int i;
    int j;
    t_node *lst_tmp;
    t_node *head;
    i = -1;
    j = -1;
    lst_tmp = NULL;
    head = NULL;
    while(av[++i])
    {
        tmp = ft_split(av[i], ' ');
        while(tmp && tmp[++j])
        {
            if (head == NULL)
            {
                head = ft_listnew(ft_atoi(tmp[j]));
                lst_tmp = head;
            }
            else
            {
                lst_tmp->next = ft_listnew(ft_atoi(tmp[j]));
                lst_tmp = lst_tmp->next;
            }
        }
        free_data(tmp);
        j = -1;
    }
    return head;
}

int main(int ac, char **av)
{
    t_stack tmp;
    
    if(ac < 2)
        return (0);
    if(arg_isdigit(av) == 1)
        return (ft_printf("Error\n"),2);
	tmp.stack_tmp = sort_tab(av, &tmp);
    if(tmp.msg_status == 1)
        return (ft_printf("Error\n"),2);
    tmp.stack_A = tab_fill(++av);
    tmp.stack_size = ft_listsize(tmp.stack_A);
    tmp.msg_status = 0;
    tmp.stack_B = NULL;
	if(tmp.stack_size == 2)
		two_stack(&tmp);
	else if(tmp.stack_size == 3)
		three_stack(&tmp);
	else if(tmp.stack_size == 4)
		four_stack(&tmp);
    else if(tmp.stack_size == 5)
       five_stack(&tmp);
    else
		big_stack(&tmp);
    return (0);
}