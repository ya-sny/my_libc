#include "libc.h"

void *memcpy(void *dst, const void *src, size_t n)
{
  unsigned char *d;
  const unsigned char *s = src;

  d = (unsigned char *)dst;
  if (!d && !s)
    return NULL;
  while (n--)
    *d++ = *s++;
  return dst;
}
