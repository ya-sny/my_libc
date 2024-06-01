#include "libicft.h"

void	list_clear(list **lst, void (*del)(void*))
{
	list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		list_delone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
