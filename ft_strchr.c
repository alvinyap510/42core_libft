#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char x;
    char *ptr;

    x = (char)c;
    ptr = (char *)s;
    while (*ptr)
    {
        if (*ptr == x)
            return (ptr);
        ptr++;
    }
    if (!*ptr && c != 0)
        return (0);
    return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     char string[] = "Hello, world!!";

//     char *toPrint = ft_strchr(string, 119);
//     printf("%s\n", toPrint);
// }