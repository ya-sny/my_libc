#include "libc.h"

int	list_size(list *lst)
{
	int		cnt;
	list	*ptr;

	ptr = lst;
	cnt = 0;
	while (ptr)
	{
		ptr = ptr->next;
		cnt++;
	}
	return cnt;
}
