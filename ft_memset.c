/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:16:02 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:23:54 by stakada          ###   ########.fr       */
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
  return b;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
  char 
  result_str = 
  return (0);
}