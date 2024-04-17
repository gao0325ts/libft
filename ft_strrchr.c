/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:44:44 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 04:35:53 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	else
	{
		while (*s)
		{
			if (*s == (unsigned char)c)
				p = s;
			s++;
		}
		return ((char *)p);
	}
}
