/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:14:45 by kel-amra          #+#    #+#             */
/*   Updated: 2022/03/04 14:14:45 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	error_checker(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = -1;
	j = 0;
	if (!tab)
		return (1);
	while (++i < size)
	{
		tmp = tab[i];
		j = i;
		while (++j < size)
		{
			if (tmp == tab[j])
				return (1);
		}
	}
	return (0);
}

static	int	size_counter(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	**tmp;

	j = 0;
	size = 0;
	i = -1;
	while (tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while (tmp && tmp[++i])
			size++;
		free_data(tmp, NULL);
		i = -1;
	}
	return (size);
}

static	int	*tab_fill(char **tab, int size)
{
	int		*sorted;
	char	**tmp;
	int		j;
	int		k;
	int		i;

	i = -1;
	j = 0;
	k = 0;
	sorted = malloc(sizeof(int) * (size));
	if (!sorted)
		return (free(sorted), NULL);
	while (tab[++j])
	{
		tmp = ft_split(tab[j], ' ');
		while (tmp && tmp[++i])
			sorted[k++] = ft_atoi(tmp[i]);
		free_data(tmp, NULL);
		i = -1;
	}
	return (sorted);
}

int	*sort_tab(char **tab, t_stack *tmpp)
{
	int		swap;
	int		size;
	int		*sorted;
	int		i;

	i = -1;
	size = size_counter(tab);
	sorted = tab_fill(tab, size);
	if (error_checker(sorted, size) == 1)
	{
		tmpp->msg_status = 1;
		free(sorted);
		return (0);
	}
	while (++i < size - 1)
	{
		if (sorted[i] > sorted[i + 1])
		{
			swap = sorted[i];
			sorted[i] = sorted[i + 1];
			sorted[i + 1] = swap;
			i = -1;
		}
	}
	return (sorted);
}
