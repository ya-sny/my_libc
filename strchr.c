#include "libc.h"

char	*strchr(const char *s, int c)
{
	char	p;

	p = (char)c;
	while (*s)
	{
		if (*s == p)
			return (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return NULL;
}
