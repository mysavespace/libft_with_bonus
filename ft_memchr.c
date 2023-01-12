/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:51:29 by kkwasny           #+#    #+#             */
/*   Updated: 2023/01/05 20:30:13 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cins;

	cins = (unsigned char *)s;
	while (n)
	{
		if (*cins == (unsigned char)c)
			return (cins);
		cins++;
		n--;
	}
	return (NULL);
}
