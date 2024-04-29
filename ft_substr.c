/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:05:28 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 21:40:40 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*result_start;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(&s[start]))
		str_len = ft_strlen(&s[start]);
	else
		str_len = len;
	result = (char *)malloc(sizeof(char) * (str_len + 1));
	if (result == NULL)
		return (NULL);
	result_start = result;
	while (str_len--)
		*result++ = s[start++];
	*result = '\0';
	return (result_start);
}
