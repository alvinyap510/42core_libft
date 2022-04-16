#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t srclen;

    i = 0;
    srclen = 0;
    while (src[srclen])
        srclen++;
    if (!dstsize)
        return (srclen);
    while (src[i] && i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (srclen);
}
