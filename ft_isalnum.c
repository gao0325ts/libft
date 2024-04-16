/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:23:11 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 01:18:12 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
  if (argc != 2 || strlen(argv[1]) != 1)
  {
		write(2, "Error\n", 6);
		return (0);
  }
  printf("ascii = %d\n", *argv[1]);
  printf("result = %d\n", ft_isalnum(*argv[1]));
  return (0);
}
*/