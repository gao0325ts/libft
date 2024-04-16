/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:16:02 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 01:50:45 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
  size_t i;
  i = 0;
  unsigned char *p = (unsigned char *)b;
  
  while (i < len)
  {
    p[i] = (unsigned char)c;
    i++;
  }
  return (b);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if (argc != 4 || strlen(argv[2]) != 1)
  {
    write(2, "Error\n", 6);
    return (0);
  }
  const char *str = argv[1];
  printf("string = %s\n", argv[1]);
  printf("char = %s\n", argv[2]);
  printf("len = %d\n", atoi(argv[3]));
  printf("result = %s\n", (unsigned char *)(ft_memset(argv[1], *argv[2], atoi(argv[3]))));
  return (0);
}
*/