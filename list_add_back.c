#include "libc.h"

void	list_add_back(list **lst, list *new)
{
  list	*ptr;

  if (!new || !lst)
    return ;
  if (*lst)
  {
    ptr = *lst;
    while (ptr->next)
      ptr = ptr->next;
    ptr->next = new;
  }
  else
    *lst = new;
}
