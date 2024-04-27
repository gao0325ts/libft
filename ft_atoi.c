/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:20:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/28 07:51:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// LONG_MIN, LONG_MIN - 1, ULONG_MAX + 1, SIZE_MAX + 1, ULONG_MAX - 1, SIZE_MAX - 1

static int ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	long long	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result * 10 > LONG_MAX - (*str - '0'))
			return ((int)LONG_MAX);
		else if (result *)
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "";
// 	printf("%d\n", ft_atoi());
// }

