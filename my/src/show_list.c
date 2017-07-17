#include "my.h"

void show_list(t_list *params)
{
	if (params)
	{
		my_putstr(params->data);
		my_putstr("\n");
		show_list(params->next);
	}
}