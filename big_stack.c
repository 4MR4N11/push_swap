/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:26:34 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 20:32:38 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	checker(t_stack *tmp, int list_size, int is_a)
{
	if(is_a)
	{
		if (tmp->index <= (list_size / 2))
		{
			push_to_a_top(tmp->index, tmp);
			tmp->index = -1;
		}
		else
		{
			push_to_a_bottom(tmp->index, tmp);
			tmp->index = -1;
		}
	}
	else
	{
		if (tmp->index <= (list_size / 2))
		{
			push_to_b_top(tmp->index, tmp);
			tmp->index = -1;
		}
		else
		{
			push_to_b_bottom(tmp->index, tmp);
			tmp->index = -1;
		}
	}
}

static	void	rev_stack(t_stack *tmp)
{
	int		i;
	t_node	*node;
	int		is_min;

	node = tmp->stack_B;
	tmp->index = 0;
	i = ft_listsize(tmp->stack_B) - 1;
	while (tmp->stack_B)
	{
		is_min = 0;
		if (node->content == tmp->stack_tmp[i])
		{
			checker(tmp, ft_listsize(tmp->stack_B), 1);
			is_min = 1;
			node = tmp->stack_B;
			i--;
		}
		if (!is_min)
			node = node->next;
		tmp->index++;
	}
}

static	int	*chunk_fill(t_stack *tmp, int sorted_stack_index, int chunk_size)
{
	int	i;
	int	*chunk;

	chunk = malloc(sizeof(int) * chunk_size);
	if(!chunk)
	{
		free(chunk);
		return (0);
	}
	i = -1;
	while (++i < chunk_size)
		chunk[i] = tmp->stack_tmp[sorted_stack_index++];
	return (chunk);
}

void	big_stack(t_stack *tmp)
{
	int		i;
	int		sorted_stack_index;
	t_node	*node;
	int		is_min;
	int		chunk_size;

	if(tmp->stack_size < 100)
		chunk_size = tmp->stack_size / 2;
	else if(tmp->stack_size >= 100 && tmp->stack_size < 500)
		chunk_size = tmp->stack_size / 5;
	else
		chunk_size = tmp->stack_size / 10;
	node = tmp->stack_A;
	tmp->index = 0;
	i = 0;
	tmp->chunk = NULL;
	sorted_stack_index = 0;
	while (tmp->stack_A)
	{
		if ((ft_listsize(tmp->stack_B) % chunk_size) == 0 && tmp->index == 0)
		{
			free (tmp->chunk);
			tmp->chunk = chunk_fill(tmp, sorted_stack_index, chunk_size);
			if(!tmp->chunk)
				return ;
			sorted_stack_index += chunk_size;
		}
		while (i < chunk_size)
		{
			is_min = 0;
			if (node->content == tmp->chunk[i])
			{
				checker(tmp, ft_listsize(tmp->stack_A), 0);
				is_min = 1;
				node = tmp->stack_A;
				i = chunk_size;
			}
			i++;
		}
		i = 0;
		if (!is_min)
			node = node->next;
		tmp->index++;
	}
	rev_stack(tmp);
}
