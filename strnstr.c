#include "libc.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	const char	*top;

	needle_len = strlen(needle);
	if (needle_len == 0
		|| (len == needle_len && !strncmp(haystack, needle, needle_len)))
		return (char *)haystack;
	top = haystack;
	while (*top && top <= haystack + len - needle_len)
	{
		if (*top == *needle
			&& !strncmp(top + 1, needle + 1, needle_len - 1))
			return (char *)top;
		top++;
	}
	return NULL;
}
