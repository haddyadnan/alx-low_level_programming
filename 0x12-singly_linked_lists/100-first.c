#include <stdio.h>

/**
 * print_first - run before main
 */
void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
