#include "lists.h"
/**
 * insert_dnodeint_at_index - insert
 * @h: dlist par
 * @idx: dlist par
 * @n: dlist par
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *tmpNode;

	newNode = malloc(sizeof(dlistint_t));
	tmpNode = *h;
	newNode->n = n;
	if (idx == 0)
	{
		((*h) == NULL) ? (*h = newNode) : (newNode->next = *h, (*h)->prev = newNode, *h = newNode);
		return (newNode);
	}
	else
	{
		tmpNode = (*h)->next;
		i = 1;
		while (tmpNode)
		{
			if (idx == i)
			{
				tmpNode->prev->next = newNode;
				newNode->next = tmpNode;
				tmpNode->prev = newNode;
				return (newNode);
			}
			i++;
			tmpNode = tmpNode->next;
		}
		free(newNode);
		return (NULL);
	}
}
