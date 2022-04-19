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
    void *dst;
    if (count > 4294967295 || size > 4294967295 || !(dst = malloc(count * size)))
        return (NULL);
    ft_bzero(dst, count * size);
    return (dst);
}