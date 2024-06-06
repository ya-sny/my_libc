#include "libc.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = strlen(src);
	if (srclen + 1 < dstsize)
		ft_memcpy(dst, src, srclen + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return srclen;
}
