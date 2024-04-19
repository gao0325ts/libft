/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:43:42 by stakada           #+#    #+#             */
/*   Updated: 2024/04/18 22:12:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c))
		return (1);
	else if (ft_islower(c))
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
  printf("result = %d\n", ft_isalpha(*argv[1]));
  return (0);
}
*/