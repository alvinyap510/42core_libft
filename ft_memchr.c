#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *ptr;
    char x;
    size_t i;

    ptr = (char *)s;
    x = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == x)
            return ((void *)(ptr + i));
        i++;
    }
    return (0);
}
