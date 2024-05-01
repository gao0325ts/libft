/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:30:08 by stakada           #+#    #+#             */
/*   Updated: 2024/05/02 03:57:39 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0 && dst == NULL)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		dst_len = ft_strlen(dst);
		while (*dst)
			dst++;
		while (*src != '\0' && i < dstsize - dst_len - 1)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
		return (dst_len + src_len);
	}
}
