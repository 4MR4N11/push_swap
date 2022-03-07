/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:13:46 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 16:16:15 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lens;
	size_t	lend;

	j = 0;
	i = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (dstsize == 0)
		return (lens);
	if (dstsize < lend)
		return (dstsize + lens);
	i = lend;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (lens + lend);
}
