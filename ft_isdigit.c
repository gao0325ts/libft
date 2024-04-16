/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:58:54 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 22:44:33 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
  if (c < '0' || c > '9')
    return (0);
  return (1);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (0);
  printf("ascii = %d\n", *argv[1]);
  printf("result = %d\n", ft_isdigit(*argv[1]));
  return (0);
}