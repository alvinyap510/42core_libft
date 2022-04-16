#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t srclen;
    size_t dstlen;

    j = 0;
    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    i = dstlen;
    if (!dstsize)
        return (srclen);
    if (dstlen < dstsize)
        return (srclen + dstsize);
    while (src[j] && i < dstsize)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return (srclen + dstlen);
}