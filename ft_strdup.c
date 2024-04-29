/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:19:54 by stakada           #+#    #+#             */
/*   Updated: 2024/04/20 16:56:27 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*start;
	char	*new_str;

	len = 0;
	while (s1[len])
		len++;
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	start = new_str;
	while (*s1)
		*new_str++ = *s1++;
	*new_str = '\0';
	return (start);
}
