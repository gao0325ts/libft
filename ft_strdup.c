/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:19:54 by stakada           #+#    #+#             */
/*   Updated: 2024/05/02 04:00:40 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*start;
	char	*new_str;

	new_str = (char *)malloc(ft_strlen(s1) + 1);
	if (new_str == NULL)
		return (NULL);
	start = new_str;
	while (*s1 != '\0')
		*new_str++ = *s1++;
	*new_str = '\0';
	return (start);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *str = "";
// 	printf("%s\n", ft_strdup(str));
// 	return (0);
// }
