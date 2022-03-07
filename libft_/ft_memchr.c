/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:33:45 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 13:55:50 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*chr;

	i = 0;
	chr = (char *)s;
	while (i < n)
	{
		if (*chr == (char)c)
			return (chr);
		i++;
		chr++;
	}
	return (NULL);
}
