#include "libc.h"

int ft_tolower(int c){
  if (c >= 'A' && c <= 'Z')
    c |= (1 << 5);
  return c;
}
