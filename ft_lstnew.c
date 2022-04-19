/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:31:13 by alyap             #+#    #+#             */
/*   Updated: 2022/04/17 18:31:15 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *ret;
    
    if(!(ret = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    ret->next = NULL;
    ret->content = content;
    return (ret);
}
