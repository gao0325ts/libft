/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:52:06 by stakada           #+#    #+#             */
/*   Updated: 2024/05/03 22:34:20 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*start;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (result == NULL)
		return (NULL);
	start = result;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, tmp);
		lst = lst->next;
	}
	return (start);
}
