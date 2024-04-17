/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:55:34 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 04:37:03 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	i = 0;
	const char *str = (const char *)s;
	while (i < n)
	{
		while (*str)
		{
			if (*str == (unsigned char)c)
				return ((void *)str);
			str++;
		}
  }
		return (NULL);
}