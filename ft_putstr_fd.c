/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:41:50 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 20:53:16 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
  if (s == NULL)
    return;
  while(*s)
  {
    write(fd, s, 1);
    s++;
  }
}

// #include <stdio.h>

// int main(void)
// {
//   ft_putstr_fd("test", 1);
//   printf("%c", '\n');
//   return 0;
// }