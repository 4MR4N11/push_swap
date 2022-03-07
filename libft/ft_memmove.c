/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:31:00 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/18 08:54:41 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*move(char *a, char *b, size_t len)
{
	len = len - 1;
	while (len >= 0)
	{
		a[len] = b[len];
		if (len == 0)
			return (a);
		len--;
	}
	return (a);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)dest;
	b = (char *)src;
	if (((char *)dest == NULL && (char *)src == NULL ) || len == 0)
		return (dest);
	if (dest > src)
		a = move(a, b, len);
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}
