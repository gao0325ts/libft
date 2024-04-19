/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:58:44 by stakada           #+#    #+#             */
/*   Updated: 2024/04/18 03:47:46 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (*p1 != *p2)
			return ((unsigned char)*p1 - (unsigned char )*p2);
		if (*p1 == '\0' || *p2 == '\0')
			return (0);
		p1++;
		p2++;
		i++;
	}
	return (0);
}
