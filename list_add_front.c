#include "libc.h"

void	list_add_front(list **lst, list *new)
{
  if (!new || !lst)
    return ;
  new->next = *lst;
  *lst = new;
}
