/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:02:13 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 16:02:14 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ret;
    size_t s_len;
    size_t i;

    s_len = ft_strlen(s);
    if (!s || !(ret = malloc(sizeof(char) * (len + 1))))
        return NULL;
    if (start > s_len)
    {
        ret[0] = '\0';
        return (ret);
    }
    i = 0;
    while (i < len && s[i])
    {
        ret[i] = s[start + i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
