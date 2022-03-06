/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:16:17 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/06 15:38:12 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_data(char **str_tmp, t_stack *tmp)
{
	int		i;
	t_node	*ptr;

	i = -1;
	if (str_tmp)
	{
		while (str_tmp[++i])
		{
			free (str_tmp[i]);
			str_tmp[i] = NULL;
		}
		free (str_tmp);
		str_tmp = NULL;
	}
	else if (tmp->stack_a)
	{
		while (tmp->stack_a)
		{
			ptr = tmp->stack_a;
			tmp->stack_a = tmp->stack_a->next;
			free (ptr);
		}
	}
}

static	int	signs(char a, char b)
{
	if (a == '-' || a == '+')
	{
		if (b < 48 || b > 57)
			return (1);
	}
	if ((a < 48 || a > 57)
		&& (a != '-' && a != '+'))
		return (1);
	return (0);
}

static	int	arg_isdigit(char **av, char **tmp)
{
	int		i;
	int		j;
	int		k;

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
				if (signs(tmp[j][k], tmp[j][k + 1]) == 1)
					return (free_data(tmp, NULL), 1);
			}
			if ((ft_atoi2(tmp[j]) > MAX_INT) || (ft_atoi2(tmp[j]) < MIN_INT))
				return (free_data(tmp, NULL), 1);
			k = -1;
		}
		free_data(tmp, NULL);
		j = -1;
	}
	return (0);
}

int	error_msg(char **av, t_stack *tmp)
{
	char	**str_tmp;

	str_tmp = NULL;
	if (arg_isdigit(av, str_tmp) == 1)
		return (write(2, "Error\n", 6), 1);
	tmp->stack_tmp = sort_tab(av, tmp);
	if (tmp->msg_status == 1)
		return (write(2, "Error\n", 6), 1);
	tmp->head = NULL;
	tmp->lst_tmp = NULL;
	list_fill(++av, tmp);
	tmp->stack_a = tmp->head;
	if (tmp->stack_a == NULL)
	{
		free(tmp->stack_tmp);
		free_data(NULL, tmp);
		return (write(2, "Error\n", 6), 1);
	}
	return (0);
}
