/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:01:50 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 16:01:51 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int is_trim(char c, char const *set)
// {
//     size_t i;

//     i = 0;
//     while (set[i])
//     {
//         if (set[i] == c)
//             return (1);
//         i++;
//     }
//     return (0);
// }


// // char *ft_strtrim(char const *s1, char const *set)
// // {
// //     char *ret;
// //     size_t ret_size;
// //     size_t i;
// //     size_t j;

// //     i = 0;
// //     ret_size = 0;
// //     while (s1[i])
// //     {
// //         if (!is_trim(s1[i], set))
// //             ret_size++;
// //         i++;
// //     }
// //     ret = malloc(sizeof(char) * (ret_size + 1));
// //     i = 0;
// //     j = 0;
// //     while (s1[i])
// //     {
// //         if (!is_trim(s1[i], set))
// //         {
// //             ret[j] = s1[i];
// //             j++;
// //         }
// //         i++;
// //     }
// //     ret[j] = '\0';
// //     return (ret);
// // }

// char *ft_strtrim(char const *s1, char const *set)
// {
//     size_t i;
//     size_t rev;
//     char *ret;


//     if (!s1)
//         return (NULL);
//     if (!set)
//         return (ft_strdup(s1));
//     i = 0;
//     rev = ft_strlen(s1) - 1;
//     while (is_trim(s1[i], set))
//         i++;
//     while (is_trim(s1[rev], set))
//         rev--;
//     if (i == ft_strlen(s1))
//         ret = ft_strdup("");
//     else
//         ret = ft_substr(s1, i, rev - i);
//     return (ret);

// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}