/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:43:00 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 12:42:19 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	*find_set(const char *str, const char *to_find)
// {
// 	const char	*temp_str;
// 	const char	*temp_to_find;

// 	while (*str && *to_find)
// 	{
// 		if (*str == *to_find)
// 		{
// 			temp_str = str;
// 			temp_to_find = to_find;
// 			while (*temp_to_find && *temp_str == *temp_to_find)
// 			{
// 				temp_str++;
// 				temp_to_find++;
// 			}
// 			if (*temp_to_find == '\0')
// 				return ((char *)str);
// 		}
// 		str++;
// 	}
// 	return (NULL);
// }

// static char	*find_set_rev(const char *str, const char *to_find)
// {
// 	const char	*temp_str;
// 	const char	*temp_to_find;

//   temp_str = str + ft_strlen(str) - 1;
// 	while (*str && *to_find)
// 	{
// 		if (*str == *to_find)
// 		{
// 			temp_str = str;
// 			temp_to_find = to_find;
// 			while (*temp_to_find && *temp_str == *temp_to_find)
// 			{
// 				temp_str++;
// 				temp_to_find++;
// 			}
// 			if (*temp_to_find == '\0')
// 				return ((char *)str);
// 		}
// 		str--;
// 	}
// 	return (NULL);
// }

static int	cmp_set(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (1);
		if (*s1 == '\0' || *s2 == '\0')
			return (1);
		s1++;
		s2++;
	}
	return (0);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	count;
	char			*dst_start;

	count = 0;
	dst_start = dst;
	while (count < n && *src != '\0')
	{
		*dst++ = *src++;
		count++;
	}
	while (count < n)
	{
		*dst = '\0';
		dst++;
		count++;
	}
	return (dst_start);
}

#include <stdio.h> // test

char *ft_strtrim(char const *s1, char const *set)
{
  size_t start;
  size_t end;
  char *result;
  long  length;

  if (s1 == NULL || set == NULL || ft_strlen(s1) == 0 || ft_strlen(set) == 0)
    return (NULL);
  start = 0;
  end = ft_strlen(s1) - 1;
  while (cmp_set(&s1[start], set, ft_strlen(set)) == 0)
    start++;
  printf("(start)%s\n", &s1[start]);
  while (cmp_set(&s1[end], set, ft_strlen(set)) == 0)
  printf("(end)%s\n", &s1[end]);
  length = end - start + 1;
  if (length <= 0)
    return (NULL);
  result = (char *)malloc(sizeof(char) * length);
  if (result == NULL)
    return (NULL);
  ft_strncpy(result, s1 + start, length);
  result[length] = '\0';
  return (result);
}

int main(void)
{
  char *r = ft_strtrim("hello world", "world");
  printf("result = %s\n", r);
  return 0;
}