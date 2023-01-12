/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:33:00 by kkwasny           #+#    #+#             */
/*   Updated: 2023/01/06 12:05:57 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

static int	ft_count_word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static int	ft_count_words(char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		i = 0;
		while (*str && (*str == c))
			str++;
		i = ft_count_word_len(str, c);
		str = str + i;
		if (i)
			j++;
	}
	return (j);
}

static char	*ft_one_word_string(char *src, int word_len)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(char) * (word_len + 1));
	if (!dst)
		return (NULL);
	while (src[i] && i < word_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**ft_separate_words(char const *s, char c, char **dest, int word)
{
	int	i;
	int	len;

	i = 0;
	while (i < word)
	{
		while (*s == c)
			s++;
		len = ft_count_word_len((char *)s, c);
		dest[i] = ft_one_word_string((char *)s, len);
		if (!dest[i])
		{
			while (i--)
				free(dest[i - 1]);
			free(dest);
			return (NULL);
		}
		s = s + len;
		i++;
	}
	dest[word] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (!s)
		return (NULL);
	len = ft_count_words((char *)s, c);
	dst = malloc(sizeof(char *) * (len + 1));
	if (!dst)
		return (NULL);
	dst = ft_separate_words(s, c, dst, len);
	return (dst);
}

/*int		main(void)
{
	int i = 0;
	char **tab;

	tab = ft_split("test if it's splitting", ' ');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/
