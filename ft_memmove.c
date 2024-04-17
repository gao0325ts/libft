/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:38:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/18 03:32:44 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				max;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	max = len;
  // lenを保存
	p_dst = (unsigned char *)dst;
  p_src = (const unsigned char *)src;
  // dstとsrc
	while (len > 0)
	{
		p_dst++;
		p_src++;
		len--;
	}
	while (len < max)
	{
		*p_dst = *p_src;
		p_dst++;
		p_src++;
		len++;
	}
	return (dst);
}

// 以下ChatGPTコード
// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char	*p_dst;
// 	const unsigned char	*p_src;

// 	if (dst == src || len == 0)
// 		return (dst);
// 領域が重複しているか、lenが0ならdst（の先頭）をそのまま返す

// 	p_dst = (unsigned char *)dst;
// 	p_src = (const unsigned char *)src;
// 事前にキャストしておく

// 	if (dst < src)
// 	{
// 		while (len--)
// 			*p_dst++ = *p_src++;
// 	}
// 	else
// 	{
// 		p_dst += len - 1;
// 		p_src += len - 1;
// 		while (len--)
// 			*p_dst-- = *p_src--;
// 	}
// 	return (dst);
// }