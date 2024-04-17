/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:19:54 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 23:48:15 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
  size_t len;
  char *new_str;

  len = 0;
  while (s1[len])
    len++;
  new_str = NULL;
  new_str = (char *)malloc(len + 1);
  if  (new_str == NULL)
    return (NULL);
  while (*s1)
    *new_str++ = *s1++;
  return (new_str);
}
