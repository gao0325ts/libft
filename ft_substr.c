/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:05:28 by stakada           #+#    #+#             */
/*   Updated: 2024/04/28 17:54:32 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *result;
  char *result_start;

  if (start >= ft_strlen(s))
    return (ft_strdup(""));
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (result == NULL)
    return (NULL);
  result_start = result;
  while (len--)
    *result++ = s[start++];
  *result = '\0';
  return (result_start);
}
