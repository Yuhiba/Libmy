#include <stdlib.h>

#include "my.h"

int my_list_size(t_list *begin)
{
	int size;

	size = 0;
	if (begin == NULL)
		return 0;
	else
		size = my_list_size(begin->next) + 1;
	my_put_nbr(size);
	return size;
}