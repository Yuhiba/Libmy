#include <stdlib.h>
#include <stdio.h>

#include "my.h"

int my_apply_on_list(t_list *begin, int (*f)(void *))
{
	while (begin != NULL)
	{
		f(begin->data);
		begin = begin->next;
	}
	return 0;
}
