/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:41:04 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 16:07:07 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nelement;

	nlist = NULL;
	while (lst != NULL)
	{
		nelement = ft_lstnew(f (lst->content));
		if (nelement == NULL)
		{
			ft_lstclear(&nelement, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back (&nlist, nelement);
	}
	return (nlist);
}
