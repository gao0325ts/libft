/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:13:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 20:50:10 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *result;
  char *result_start;

  if (s1 == NULL || s2 == NULL)
    return (NULL);
  result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  if (result == NULL)
    return (NULL);
  result_start = result;
  while(*s1)
    *result++ = *s1++;
  while(*s2)
    *result++ = *s2++;
  *result = '\0';
  return(result_start);
}
