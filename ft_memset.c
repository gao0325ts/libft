/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:16:02 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:47:21 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
  unsigned char *p = b;
  while (len > 0)
  {
    *p = (unsigned char)c;
    p++;
    len--;
  }
  *p = '\0';
  return b;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 4)
    return (0);
  printf("result str = %s\n", (char *)(ft_memset(argv[1], atoi(argv[2]), atoi(argv[3])))); 
  return (0);
}