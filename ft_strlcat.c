/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:30:08 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 03:35:40 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	n;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	n = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		while (*dst != '\0')
			dst++;
		while (*src != '\0' && n < dstsize - dst_len - 1)
		{
			*dst++ = *src++;
			n++;
		}
		*dst = '\0';
		return (dst_len + src_len);
	}
}
