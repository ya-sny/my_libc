#include "libc.h"

list *listnew(void *content)
{
	list	*new_list;

	new_list = (list *)malloc(sizeof(list));
	if (!new_list)
		return NULL;
	new_list->content = content;
	new_list->next = NULL;
	return new_list;
}
