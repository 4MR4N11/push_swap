/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:08:07 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/14 20:01:26 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		cmp;

	cmp = 0;
	i = 0;
	while (i < n)
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i])
			|| ((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] == '\0'))
		{
			cmp = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (cmp);
		}
		i++;
	}
	return (cmp);
}
