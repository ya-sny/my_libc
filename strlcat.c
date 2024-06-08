#include "libc.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d)
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return dlen + strlen(s);
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return dlen + (s - src);
}
