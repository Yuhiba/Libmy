#include "my.h"
#ifndef __TEST_H__
#define __TEST_H__

void assert_equal(int, int);
void assert_not_equal(int, int);
void assert_null(void *);
void assert_list_equal(t_list *, t_list *, int (*)());

#endif