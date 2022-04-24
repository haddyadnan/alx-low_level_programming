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
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
