/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:23:35 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 23:27:40 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  unsigned char *p = s;
  while (n > 0)
  {
    *p = '\0';
    p++;
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