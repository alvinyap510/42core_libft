/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:31:51 by alyap             #+#    #+#             */
/*   Updated: 2022/04/17 18:31:52 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
        *lst = new;
    else
        ft_lstlast(*lst)->next = &*new;
}