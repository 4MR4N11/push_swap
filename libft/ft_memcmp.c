/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:59:11 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/14 19:00:51 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				cmp;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	cmp = 0;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
		{
			cmp = ss1[i] - ss2[i];
			return (cmp);
		}
		i++;
	}
	return (cmp);
}
