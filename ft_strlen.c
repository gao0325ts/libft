/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:45:49 by stakada           #+#    #+#             */
/*   Updated: 2024/04/17 01:18:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
  const char *str = argv[1];

  if (argc != 2)
  {
		write(2, "Error\n", 6);
		return (0);
  }
  printf("string = %s\n", argv[1]);
  printf("result = %zu\n", ft_strlen(str));
  return (0);
}
*/