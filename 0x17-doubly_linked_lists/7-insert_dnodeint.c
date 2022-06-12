#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *tmpNode, *tmpNode2;

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	tmpNode = *h;

	for (i = 1; tmpNode && i < idx; i++, tmpNode = tmpNode->next)
		tmpNode2 = tmpNode;

	newNode->n = n;

	if (idx == 0)
	{

		((*h) == NULL) ? (*h = newNode) : (newNode->next = *h, (*h)->prev = newNode, *h = newNode);
		return (newNode);
	}
	else if (idx == 1)
	{
		tmpNode2 = *h;
		tmpNode = ((*h)->next == NULL) ? NULL : (*h)->next;
		newNode->prev = tmpNode2;
		newNode->next = tmpNode;
		tmpNode2->next = newNode;
		if (tmpNode)
			tmpNode->prev = newNode;
		return (newNode);
	}
	else
	{
		tmpNode = (*h)->next;
		i = 1;
		while (1)
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
