#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print elements of list
 * @h: linked list
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] (nil)\n", h->len);
		}
		h = h->next;
	}
	return (i);
}
