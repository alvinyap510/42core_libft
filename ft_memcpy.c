#include "libft.h"

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t  i;
	unsigned char *srcptr = (unsigned char *)src;
	unsigned char *dstptr = (unsigned char *)dst;

	i = 0;
	if (!dst || !src)
		return (0);

	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++; 
	}
	return (dst);
}