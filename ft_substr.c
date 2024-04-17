/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:05:28 by stakada           #+#    #+#             */
/*   Updated: 2024/04/18 03:00:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t s_len;
  char *result;
  s_len = ft_strlen(&s[start]);
  result = (char *)malloc(sizeof(char) * len + 1);
  if (result == NULL)
    return (NULL);
  while (len > 0)
  {
    *result++ = s[start++];
    len--;
  }
  return (result);
}