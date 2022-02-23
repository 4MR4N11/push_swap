/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:52:12 by kel-amra          #+#    #+#             */
/*   Updated: 2022/02/23 20:13:31 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_skip_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	return (i);
}

static int	ft_sign(const char *str)
{
	int	i;

	i = ft_skip_space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] < 48 || str[i + 1] > 57)
			return (-1);
		i++;
	}
	return (i);
}

long long	ft_atoi2(const char *str)
{
	int	i;
	long long	nb;

	nb = 0;
	i = ft_skip_space(str);
	i = ft_sign(str);
	if(i == -1)
		return(-1);
	while (str[i] != '\0' && (str[i] <= 57 && str[i] >= 48))
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			nb = nb + (str[i] - 48);
			if (str[i + 1] != '\0' && str[i + 1] <= 57 && str[i + 1] >= 48)
				nb = nb * 10;
		}
		else
			return (nb);
		i++;
	}
	i = ft_skip_space(str);
	i = ft_sign(str);
	if (str[i - 1] == '-')
		nb = nb * -1;
	return (nb);
}
