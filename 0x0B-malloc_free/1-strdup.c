#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointer to a nwly allocated space
 * @str: string
 * Return: Pointer or NULL
 *
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (strdup(str));
	}
}
