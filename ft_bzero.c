/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:23:35 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 01:55:26 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
  size_t i;
  i = 0;
  
  while (i < n)
  {
    ((unsigned char *)s)[i] = '\0';
    i++;
  }
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>

// int main(int argc, char *argv[])
// {
//   if (argc != 3 || strlen(argv[2]) != 1)
//   {
//     write(2, "Error\n", 6);
//     return (0);
//   }
//   const char *str = argv[1];
//   printf("string = %s\n", argv[1]);
//   printf("len = %d\n", atoi(argv[2]));
//   ft_bzero(argv[1], atoi(argv[2]));
//   printf("result = %c\n", argv[1][2]);
//   return (0);
// }