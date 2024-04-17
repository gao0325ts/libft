/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 04:38:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 21:59:03 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  size_t max;
  max = len;
  unsigned char *p_dst = (unsigned char *)dst;
	const unsigned char *p_src = (const unsigned char *)src;
  while(len > 0)
  {
    p_dst++;
    p_src++;
    len--;
  }
  while(len < max)
  {
		*p_dst = *p_src;
		p_dst++;
		p_src++;
    len++;
  }
  return (dst);
}
