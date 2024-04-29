/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:24:51 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 21:55:25 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_length(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static size_t	count_words(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	size_t	word_count;
	char	**result;
	size_t	i;
	size_t	j;
	size_t	len;

	if (str == NULL)
		return (NULL);
	word_count = count_words(str, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*str && *str == c)
			str++;
		len = word_length(str, c);
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		j = 0;
		while (j < len)
			result[i][j++] = *str++;
		result[i][j] = '\0';
		i++;
	}
	result[word_count] = NULL;
	return (result);
}

// #include <libc.h>

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	charset1;
// 	char	**result1;

// 	str1 = "hello!";
// 	charset1 = ' ';
// 	result1 = ft_split(str1, charset1);
// 	printf("Test 1\n");
// 	for (int i = 0; result1[i] != NULL; i++)
// 	{
// 		printf("box %d: %s\n", i, result1[i]);
// 		free(result1[i]);
// 	}
// 	free(result1);
// }