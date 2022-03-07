/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:48 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 10:52:13 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	size_checker(t_stack *tmp)
{
	if (tmp->stack_size == 1)
		return (0);
	else if (tmp->stack_size == 2)
		two_stack(tmp);
	else if (tmp->stack_size == 3)
		three_stack(tmp);
	else if (tmp->stack_size == 4)
		four_stack(tmp);
	else if (tmp->stack_size == 5)
		five_stack(tmp);
	else
	{
		if (big_stack(tmp))
		{
			free(tmp->stack_tmp);
			return (write(2, "Error\n", 6), 1);
		}
		free(tmp->stack_tmp);
		free_data(NULL, tmp);
	}
	return (0);
}

static	void	node_creator(t_stack *tmp, char **str_tmp)
{
	int	j;

	j = -1;
	while (str_tmp && str_tmp[++j])
	{
		if (tmp->head == NULL)
		{
			tmp->head = ft_listnew(ft_atoi(str_tmp[j]));
			if (tmp->head == NULL)
				return ;
			tmp->lst_tmp = tmp->head;
		}
		else
		{
			tmp->lst_tmp->next = ft_listnew(ft_atoi(str_tmp[j]));
			tmp->lst_tmp = tmp->lst_tmp->next;
		}
	}
}

void	list_fill(char **av, t_stack *tmp)
{
	char	**str_tmp;
	int		i;

	i = -1;
	while (av[++i])
	{
		str_tmp = ft_split(av[i], ' ');
		node_creator(tmp, str_tmp);
		free_data(str_tmp, NULL);
	}
}

int	main(int ac, char **av)
{
	t_stack	tmp;

	if (ac < 2)
		return (0);
	if (error_msg(av, &tmp) == 1)
		return (1);
	get_data(&tmp, 1);
	if (!stack_checker(&tmp))
		return (0);
	if (size_checker(&tmp))
		return (1);
	return (0);
}
