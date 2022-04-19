/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:29 by alyap             #+#    #+#             */
/*   Updated: 2022/04/17 18:32:30 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *ret;

    if (!lst || !f || !del)
        return (NULL);
    ret = ft_lstnew(f(lst->content));
    while (lst->next)
    {
        lst = lst->next;
        ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
    }
    return (ret);
}


