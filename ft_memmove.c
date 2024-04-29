/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:38:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/27 23:54:18 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (p_src < p_dst)
	{
		p_dst += len - 1;
		p_src += len - 1;
		while (len)
		{
			*p_dst-- = *p_src--;
			len--;
		}
	}
	else
	{
		while (len)
		{
			*p_dst++ = *p_src++;
			len--;
		}
	}
	return (dst);
}
