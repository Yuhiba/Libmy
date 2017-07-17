#include <stdlib.h>

#include "mylist.h"
int my_add_list_to_list(t_list 	**begin1, t_list *begin2)
{
	t_list *node;

	node = NULL;
	if ((node = malloc(sizeof(*node))))
	{
		node->data = begin2;
		node->next = *begin1;
		*begin1 = node;
	}
	return 0;
}