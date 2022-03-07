/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:03:48 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 15:05:31 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static	int	instractions_reader(t_stack *tmp)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (instraction_checker(tmp, str))
		{
			free(str);
			return (write(1, "Error\n", 6), 1);
		}
		free (str);
		str = NULL;
		str = get_next_line(0);
	}
	if (!stack_checker(tmp))
		return (write(1, "OK\n", 3), 0);
	return (write(1, "KO\n", 3), 1);
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
	get_data(&tmp);
	if (!stack_checker(&tmp))
		return (0);
	if (instractions_reader(&tmp))
	{
		free_data(tmp.instractions, &tmp);
		return (1);
	}
	free_data(tmp.instractions, &tmp);
	return (0);
}
