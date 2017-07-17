#include <stdlib.h>

#include "my.h"

void add_node(void *value, t_list **head)
{
	t_list *node;

	node = NULL;
	if ((node = malloc(sizeof(*node))))
	{
		node->data = value;
		node->next = *head;
		*head = node;
	}
}