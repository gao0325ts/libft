/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:43:42 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 22:22:52 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (0);
}

int ft_islower(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (0);
}

int ft_isalpha(int c)
{
  if (ft_isupper(c))
    return (0);
  else if (ft_islower(c))
    return (0);
  return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (0);
  printf("%d\n", ft_isalpha(atoi(argv[1])));
  return (0);
}
*/