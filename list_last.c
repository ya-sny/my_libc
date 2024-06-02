#include "libc.h"

list	*list_last(list *lst)
{
	list	*ptr;

	if (!lst)
		return NULL;
	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return ptr;
}
