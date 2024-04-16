/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:41:35 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 03:50:56 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s++;
		return (s + 1);
	}
	else
	{
		while (*s)
		{
			if (*s == (unsigned char)c)
				return (s);
			s++;
		}
		return (NULL);
	}
}
