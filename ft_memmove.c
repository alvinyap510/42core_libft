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
    return (dest);
}

// #include <stdio.h>

// char target[21] = "a shiny white sphere";

// int main( void )
// {
//   char * p = target + 2;  /* p points at the starting character
//                           of the word we want to replace */
//   char * source = target + 8; /* start of "shiny" */
 
//   printf( "Before memmove, target is \"%s\"\n", target );
//   ft_memmove( p, source, 5 );
//   printf( "After memmove, target becomes \"%s\"\n", target );
// }
