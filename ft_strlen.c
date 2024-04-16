/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:45:49 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:15:43 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
  size_t i;
  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (0);
  const char *p = argv[1];
  printf("result = %zu\n", ft_strlen(p));
  return (0);
}