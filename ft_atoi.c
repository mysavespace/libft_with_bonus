/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkwasny <kkwasny@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:10:54 by kkwasny           #+#    #+#             */
/*   Updated: 2023/01/04 22:49:23 by kkwasny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	number;
	int	minus;

	number = 0;
	minus = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			minus = minus * -1;
		nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		number = number * 10 + *nptr - '0';
		nptr++;
	}
	return (minus * number);
}

/*int main(void)
{
	char *value = "  \t\n -4582abc45";
	char *value1 = "+4582abc45";
	char *value2 = "asd4582abc45";
	char *value3 = "";
	char *value4 = "2147483649";
	int number;
	number = ft_atoi(value);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value1);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value2);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value3);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value4);
	printf("this is the number: %d\n", number);

}
*/
