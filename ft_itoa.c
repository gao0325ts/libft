/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:14:37 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 14:21:58 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static char *ft_itoa_int_min(int n)
{
  long num;
  int len;
  char *result;

  num = n;
  num = -num;
  len = 11;
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (!result)
    return (NULL);
  result[len] = '\0';
  while(num != 0)
  {
    result[--len] = num % 10 + '0';
    num /= 10;
  }
  result[0] = '-';
  return (result);
}

static int count_len(int n, int isNegative)
{
  int len;

  len = 0;
  if (n == 0)
    return (1);
  else if (isNegative)
    len++;
  while (n != 0)
  {
    len++;
    n /= 10;
  }
  return (len);
}

char *ft_itoa(int n)
{
  char *str;
  int isNegative;
  int len;

  isNegative = 0;
  if (n == INT_MIN)
    return (ft_itoa_int_min(n));
  if (n < 0)
  {
    isNegative = 1;
    n = -n;
  }
  len = count_len(n, isNegative);
  str = (char *)malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);
  str[len--] = '\0';
  while (len >= 0)
  {
    str[len--] = n % 10 + '0';
    n /= 10;
  }
  if (isNegative)
    str[0] = '-';
  return (str);
}