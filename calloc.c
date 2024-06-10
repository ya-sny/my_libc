#include "libc.h"

void	*calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (!memory)
		return NULL;
	else
		bzero(memory, count * size);
	return memory;
}
