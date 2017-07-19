#include <stdio.h>

#include "my.h"
#include "test.h"

void assert_int_equal(int received, int expected)
{
	if (received == expected)
		printf("SUCCESS\n");
	else
		printf("FAILURE value received: %d and expected: %d\n", received, expected);
}

void assert_int_not_equal(int received, int expected)
{
	if (received != expected)
		printf("SUCCESS\n");
	else
		printf("FAILURE value received: %d and expected: %d\n", received, expected);
}

void assert_ptr_equal(void *received, void *expected)
{
	if (received == expected)
		printf("SUCCESS\n");
	else
		printf("FAILURE value received: %p and expected: %p\n", received, expected);
}

void assert_ptr_not_equal(void *received, void *expected)
{
	if (received != expected)
		printf("SUCCESS\n");
	else
		printf("FAILURE value received: %p and expected: %p\n", received, expected);
}

void assert_null(void *data)
{
	if (data == NULL)
		printf("SUCCESS\n");
	else
		printf("FAILURE value received: %p and expected: NULL\n", data);
}



void assert_list_equal(t_list *list, t_list *ref, int compare_fct())
{
	while(list && ref)
	{
		if ((compare_fct(list->data, ref->data))== 0)
		{
			printf("SUCCESS\n");
			list = list->next;
			ref	= ref->next;
		}
		else
			printf("FAILURE value received: %p and expected: %p\n", list->data, ref->data);
	}
}
