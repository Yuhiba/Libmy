#include <stdlib.h>

#include "my.h"

int my_rev_list(t_list **begin)
{
	t_list *tmp;
	t_list *prev;
	t_list *next;

	prev = NULL;
	tmp = *begin;
	while (tmp != NULL)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*begin = prev;
	return 0;
}