/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:30:08 by stakada           #+#    #+#             */
/*   Updated: 2024/04/30 23:32:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	n;

	dst_len = 0;
	src_len = ft_strlen(src);
	n = 0;
	if (dstsize == 0 && !dst)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		dst_len = ft_strlen(dst);
		while (*dst)
			dst++;
		while (*src && n < dstsize - dst_len - 1)
		{
			*dst++ = *src++;
			n++;
		}
		*dst = '\0';
		return (dst_len + src_len);
	}
}
