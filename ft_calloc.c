/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:57:38 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 15:57:40 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *dst;
    size_t i;

    if (!(dst = malloc(count * size)))
        return NULL;
    i = 0;
    while (i < count * size)
    {
        dst[i] = 0;
        i++;
    }
    return ((void *)dst);
}


