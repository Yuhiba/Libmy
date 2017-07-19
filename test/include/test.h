#include "my.h"

#ifndef __TEST_H__
#define __TEST_H__

void assert_int_equal(int, int);
void assert_int_not_equal(int, int);
void assert_ptr_equal(void *, void *);
void assert_ptr_not_equal(void *, void *);
void assert_null(void *);
void assert_list_equal(t_list *, t_list *, int (*)());

#endif