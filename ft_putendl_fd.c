/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:46:48 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 20:53:10 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
  if (s == NULL)
    return;
  while(*s)
  {
    write(fd, s, 1);
    s++;
  }
  write(fd, "\n", 1);
}

// int main(void)
// {
//   ft_putendl_fd("test", 1);
//   return 0;
// }