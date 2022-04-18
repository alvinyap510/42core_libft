/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:00:53 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 16:00:54 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (!needle)
        return ((char *)haystack);
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j && i + j < len])
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (0);
}