/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:26:34 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/07 10:48:33 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	chunk_fill(t_stack *tmp, int chunk_size)
{
	int	i;
	int	j;

	j = tmp->sorted_stack_index;
	i = -1;
	if ((ft_listsize(tmp->stack_b) % chunk_size) == 0 && tmp->index == 0)
	{
		free (tmp->chunk);
		tmp->chunk = malloc(sizeof(int) * chunk_size);
		if (!tmp->chunk)
			return (free (tmp->chunk), -1);
		while (++i < chunk_size)
			tmp->chunk[i] = tmp->stack_tmp[j++];
		tmp->sorted_stack_index += chunk_size;
	}
	return (0);
}

static	int	from_a_to_b(t_stack *tmp, int chunk_size, t_node *node)
{
	int		i;
	int		is_min;

	i = -1;
	while (tmp->stack_a)
	{
		if (chunk_fill(tmp, chunk_size) == -1)
			return (1);
		while (++i < chunk_size)
		{
			is_min = 0;
			if (node->content == tmp->chunk[i])
			{
				checker(tmp, ft_listsize(tmp->stack_a), 0);
				is_min = 1;
				node = tmp->stack_a;
				i = chunk_size;
			}
		}
		i = -1;
		if (!is_min)
			node = node->next;
		tmp->index++;
	}
	return (0);
}	

static	void	from_b_to_a(t_stack *tmp)
{
	int		i;
	t_node	*node;
	int		is_min;

	node = tmp->stack_b;
	tmp->index = 0;
	i = ft_listsize(tmp->stack_b) - 1;
	while (tmp->stack_b)
	{
		is_min = 0;
		if (node->content == tmp->stack_tmp[i])
		{
			checker(tmp, ft_listsize(tmp->stack_b), 1);
			is_min = 1;
			node = tmp->stack_b;
			i--;
		}
		if (!is_min)
			node = node->next;
		tmp->index++;
	}
}

static	int	get_chunk_size(t_stack *tmp)
{
	int	chunk_size;

	if (tmp->stack_size < 100)
		chunk_size = tmp->stack_size / 2;
	else if (tmp->stack_size >= 100 && tmp->stack_size < 500)
		chunk_size = tmp->stack_size / 5;
	else
		chunk_size = tmp->stack_size / 10;
	return (chunk_size);
}

int	big_stack(t_stack *tmp)
{
	int		chunk_size;
	int		msg;
	t_node	*node;

	node = tmp->stack_a;
	chunk_size = get_chunk_size(tmp);
	msg = from_a_to_b(tmp, chunk_size, node);
	if (msg == 1)
		return (free_data(NULL, tmp), 1);
	from_b_to_a(tmp);
	return (0);
}
