#include "libc.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	unsigned char		*lastd;
	unsigned const char	*lasts;

	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (!d && !s)
		return NULL;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return dst;
}
