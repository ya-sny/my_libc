#include "libc.h"

int tolower(int c)
{
  if (c >= 'A' && c <= 'Z')
    c |= (1 << 5);
  return c;
}
