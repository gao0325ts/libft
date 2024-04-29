/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:40:50 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 20:51:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char to_upper(unsigned int index, char c)
// {
//   if (index == 10000)
//     return ('\0');
//   if (c >= 'a' && c <= 'z')
//     return (c - 'a' + 'A');
//   return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// int main()
// {
//     const char *s = "hello";
//     char *result = ft_strmapi(s, to_upper);
//     printf("Result: %s\n", result);
//     return (0);
// }