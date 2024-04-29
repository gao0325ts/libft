/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:04:38 by stakada           #+#    #+#             */
/*   Updated: 2024/04/30 08:22:12 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*tmp_haystack;
	const char	*tmp_needle;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	else if (len <= 0 || *haystack == '\0')
		return (NULL);
	while (i < len && *haystack)
	{
		if (*haystack == *needle)
		{
			j = i;
			tmp_haystack = haystack;
			tmp_needle = needle;
			while (j < len && *tmp_haystack != '\0' && *tmp_needle != '\0'
				&& *tmp_haystack == *tmp_needle)
			{
				tmp_haystack++;
				tmp_needle++;
				j++;
			}
			if (*tmp_needle == '\0')
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *str1 = (char*)"";
// 	char *result = ft_strnstr(str1, "coucou", -1);
// 	printf("%s\n", result);
// 	char *str2 = (char*)"";
// 	char *answer = strnstr(str2, "coucou", -1);
// 	printf("%s\n", answer);
// 	return (0);
// }
