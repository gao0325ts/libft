/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:27:59 by stakada           #+#    #+#             */
/*   Updated: 2024/05/02 03:52:36 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*start;

	if (dst == NULL && src == NULL)
		return (NULL);
	start = (char *)dst;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (start);
}
