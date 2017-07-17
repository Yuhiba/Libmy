#include <stdlib.h>

#include "my.h"

void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
	while (begin != NULL)
	{
		if(!(cmp(data_ref, begin->data)))
		{
			my_putstr(begin->data);
			my_putstr("\n");
			return 0;
		}
		begin = begin->next;
	}
	return 0;
}
