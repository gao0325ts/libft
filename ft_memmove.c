/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:38:37 by stakada           #+#    #+#             */
/*   Updated: 2024/05/03 07:35:52 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	if (tmp_src < tmp_dst)
	{
		tmp_dst += len - 1;
		tmp_src += len - 1;
		while (len--)
			*tmp_dst-- = *tmp_src--;
	}
	else
	{
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	return (dst);
}
