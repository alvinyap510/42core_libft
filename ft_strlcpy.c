/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:00:27 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 16:00:28 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t srclen;

    i = 0;
    srclen = 0;
    while (src[srclen])
        srclen++;
    if (!dstsize)
        return (srclen);
    while (src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (srclen);
}
