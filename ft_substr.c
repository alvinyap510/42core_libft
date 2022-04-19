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
    size_t i;

    if (!s)
        return NULL;
    if (start >= ft_strlen(s))
		len = 0;
	else if ((start + len) >= ft_strlen(s))
		len = ft_strlen(s) - start;
    if (!(ret = malloc(sizeof(char) * (len + 1))))
        return NULL;
    i = 0;
    while (i < len && s[start + i])
    {
        ret[i] = s[start + i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
