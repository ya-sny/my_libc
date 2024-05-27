#include "libc.h"

void *memset(void *b, int c, size_t len)
{
  unsigned char	*ptr;
  unsigned char	pc;

  ptr = (unsigned char *)b;
  pc = (unsigned char)c;
  while (len--)
    *ptr++ = pc;
  return b;
}
