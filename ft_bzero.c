/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:23:35 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:55:53 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  int i;
  i = 0;
  while (n > 0)
  {
    (const char *)s[i] = '\0';
    i++;
    n--;
  }
  return s;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
  char 
  result_str = 
  return (0);
}