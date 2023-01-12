/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:44:09 by kkwasny           #+#    #+#             */
/*   Updated: 2023/01/12 19:17:52 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pom;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		pom = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pom;
	}
	*lst = NULL;
}
