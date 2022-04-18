/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:01:28 by alyap             #+#    #+#             */
/*   Updated: 2022/04/16 16:01:30 by alyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
    char x;
    char *ptr;
    int i;

    x = (char)c;
    ptr = 0;
    i = 0;

    while (s[i])
    {
        if (s[i] == x)
            ptr = (char *)s + i;
        i++;
    }
    if (x == '\0')
        ptr = (char *)s + i;
    return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     char string[] = "Hello, world!!";

//     char *toPrint = ft_strrchr(string, 108);
//     printf("%s\n", toPrint);
// }
