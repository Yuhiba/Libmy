#include <stdlib.h>

#include "mylist.h"
#include "my.h"

static void rm_node(t_list **begin, t_list **prev, t_list **tmp)
{
	t_list *next;

	if (*prev == *tmp)
	{
		next = (*tmp)->next;
		free(*tmp);
		*tmp = next;
		*begin = next;
	}
	else
	{
		(*prev)->next = (*tmp)->next;
		free(*tmp);
		*tmp = (*prev)->next;
	}
	*prev = *tmp;
	if (*tmp != *prev)
		*tmp = (*tmp)->next;
}

int my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	tmp = *begin;
	prev = *begin;
	while (tmp)
	{
		if (cmp(*(int *)tmp->data, *(int *)data_ref))
			rm_node(begin, &prev, &tmp);
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
	return 0;
}