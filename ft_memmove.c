/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:59:02 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 15:59:09 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dest;
    char *srce;
    size_t i;

    dest = (char *)dst;
    srce = (char *)src;

    if (dest > srce)
    {
        i = len;
        while (i-- > 0) 
            dest[i] = srce[i];
    }
    else
    {
        i = 0;
        while (i < len)
        {
            dest[i] = srce[i];
            i++;
        }
    }
    return ((void *)dest);
}