#include <stdlib.h>
#include <stdio.h>

int isalpha(int c); 
int isalnum(int c); 
int isdigit(int c); 
int isprint(int c); 
int isascii(int c);
int toupper(int c);
int tolower(int c);
size_t strlen(const char *s);
void *memcpy(void *dst, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *b, int c, size_t len);

typedef struct s_list
{
  void			*content;
  struct s_list	*next;
} list;

list *listnew(void *content);
