/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:59:54 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 15:59:55 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ret;
    size_t i;
    size_t j;

    if (!(ret = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return NULL;
    i = 0;
    while (s1[i])
    {
        ret[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        ret[i] = s2[j];
        i++;
        j++;
    }
    ret[i] = '\0';
    return (ret);
}
