#include "lib.h"

char	*strrchr(const char *s, int c)
{
	char	*save;

	save = NULL;
	while (1)
	{
		if (*s == c)
			save = (char *)s;
		if (!*s)
			return save;
		s++;
	}
}
