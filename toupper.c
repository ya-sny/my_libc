#include "libc.h"

int toupper(int c)
{
  if (c >= 'a' && c <= 'z')
    c &= ~(1 << 5);
  return c;
}
