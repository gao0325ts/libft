/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:51:55 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 19:55:22 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  char	c;

  c = '0';
  if (n == -2147483648)
  {
    write(fd, "-2147483648", 11);
    return ;
  }
  if (n < 0)
  {
    n = -n;
    write(fd, "-", 1);
  }
  if (n >= 10)
    ft_putnbr_fd(n / 10, fd);
  c = n % 10 + '0';
  write(fd, &c, 1);
}

// #include <stdio.h>

// int main(void)
// {
//   ft_putnbr_fd(4567, 1);
//   printf("%c", '\n');
//   return 0;
// }