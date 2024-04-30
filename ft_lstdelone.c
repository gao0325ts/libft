/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:27:53 by stakada           #+#    #+#             */
/*   Updated: 2024/04/30 10:53:49 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
  t_list *next;
  if (!lst || !del)
    return ;
  while (lst->next)
  {
    next = lst->next;
    del(lst->content);
    free(lst);
    lst = next;
  }
}