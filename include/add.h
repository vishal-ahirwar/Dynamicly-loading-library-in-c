#ifndef ADD
#define ADD
#include <stdio.h>
void sayHello(const char*);
int add(const int, const int);
int sub(const int, const int);
int (*action)(const int, const int) = NULL;
#endif
