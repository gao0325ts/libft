/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:04:38 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 04:36:27 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  const char	*tmp_haystack;
	const char	*tmp_needle;

  i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len)
	{
		if (*haystack == *needle)
		{
			tmp_haystack = haystack;
			tmp_needle = needle;
			while (*tmp_needle != '\0' && *tmp_haystack == *tmp_needle)
			{
				tmp_haystack++;
				tmp_needle++;
			}
			if (*tmp_needle == '\0')
				return ((char *)haystack);
		}
		i++;
    haystack++;
	}
	return (0);
}
