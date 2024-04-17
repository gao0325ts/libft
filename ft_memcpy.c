/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:27:59 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 20:04:46 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *p_dst = (unsigned char *)dst;
	const unsigned char *p_src = (const unsigned char *)src;

	while (i < n)
	{
		*p_dst = *p_src;
		p_dst++;
		p_src++;
		i++;
	}
	return (dst);
}