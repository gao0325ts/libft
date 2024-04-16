/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:23:11 by stakada           #+#    #+#             */
/*   Updated: 2024/04/16 22:26:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
  if (ft_isalpha(c))
    return (0);
  else if (ft_isdigit(c))
    return (0);
  return (1);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (0);
  printf("%d\n", ft_isalnum(atoi(argv[1])));
  return (0);
}
