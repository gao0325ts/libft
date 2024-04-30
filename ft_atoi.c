/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:20:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/30 09:08:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	if (!ft_isdigit(*str))
		return (result);
	while (ft_isdigit(*str))
	{
		if (sign == 1 && result > (LONG_MAX - (*str - '0')) / 10)
			return ((int)LONG_MAX);
		else if (sign == -1 && result > (LONG_MAX - (*str - '0')) / 10)
			return ((int)LONG_MIN);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// ?
// -(result * 10 + (*str - '0')) < LONG_MIN
// --> result > (-LONG_MIN - (*str - '0')) / 10

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	char *str = "--42";
// 	printf("%d\n", ft_atoi(str));
// 	char *str2 = "--42";
// 	printf("%d\n", atoi(str2));
// 	return (0);
// }
