#include "libc.h"

char	*strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*top;

	if (!s1 || !s2)
		return NULL;
	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (!ptr)
		return NULL;
	top = ptr;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return top;
}
