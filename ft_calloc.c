/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:23:28 by kkwasny           #+#    #+#             */
/*   Updated: 2023/01/06 00:14:41 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	int		area;

	area = nmemb * size;
	ptr = malloc(area);
	if (!ptr)
		return (NULL);
	while (--area >= 0)
		*(ptr + area) = '\0';
	return ((void *)ptr);
}
