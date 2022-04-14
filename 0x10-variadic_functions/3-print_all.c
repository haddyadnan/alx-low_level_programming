#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print character
 *
 * @list: va list
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - print integer
 *
 * @list: va list
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 *print_float - print floaat
 *
 * @list: va list
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - print string
 *
 * @list: va list
 */
void print_string(va_list list)
{
	char *holder;

	holder = va_arg(list, char *);
	if (holder == NULL)
		holder = "(nil)";
	printf("%s", holder);
}

/**
 * print_all - func to print anything
 * @format: content
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep;

	check fmt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	i = 0;
	sep = "";
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (fmt[j].type[0] == format[i])
			{
				printf("%s", sep);
				fmt[j].typ(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
