/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:52:06 by stakada           #+#    #+#             */
/*   Updated: 2024/04/30 18:34:53 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *result;
  t_list *start;

  if (!lst || !f || !del)
    return (NULL);
  result = ft_lstnew(f(lst->content));
  if (!result)
    return (NULL);
  start = result;
  while (lst->next)
  {
    result->next = ft_lstnew(f(lst->next->content));
    if (!result->next)
    {
      ft_lstclear(&start, del);
      return (NULL);
    }
    result = result->next;
    lst = lst->next;
  }
  return (start);
}
