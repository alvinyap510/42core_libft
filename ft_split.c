/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:29:19 by alyap             #+#    #+#             */
/*   Updated: 2022/04/17 18:29:22 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_count_splits(char *str, char c)
{
    size_t split_counter;
    size_t isWord;
    size_t i;

    split_counter = 0;
    isWord = 0;
    i = 0;
    while(str[i])
    {
        if (isWord == 0 && str[i] != c)
        {
            isWord = 1;
            split_counter++;
        }
        if (isWord == 1 && str[i] == c)
            isWord = 0;
        i++;
    }
    return (split_counter);
}

char		**ft_split(char const *s, char c)
{
    size_t splits;
    char    **ret;
    size_t  d1;
    size_t  i;
    size_t  start;

    if (!s)
        return NULL;
    splits = ft_count_splits((char *)s, c);
    if (!(ret = malloc(sizeof(char *) * (splits + 1))))
        return NULL;
    d1 = 0;
    i = 0;
    while (d1 < splits)
    {
        while(s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
			i++;
        ret[d1] = ft_substr(s, start, i - start);
        d1++;
        i++;
    }
    ret[d1] = NULL;
    return (ret);
}