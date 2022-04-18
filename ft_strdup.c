/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:59:46 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 15:59:47 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    size_t len;
    char *ret;

    len = ft_strlen(s1);
    if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
        return NULL;
    i = 0;
    while (i < len)
    {
        ret[i] = s1[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
