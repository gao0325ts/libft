/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 03:44:44 by stakada           #+#    #+#             */
/*   Updated: 2024/04/29 19:04:16 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *p;
	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)p);
}

int main(void)
{
	printf("%s\n", ft_strrchr("teste", 1024));
	return 0;
}