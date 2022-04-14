#ifndef VARIADIC_GUARD_H
#define VARIADIC_GUARD_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
typedef struct check
{
	char *type;
	void (*typ)();
} check;

#endif /* VARIADIC_GUARD_H */
