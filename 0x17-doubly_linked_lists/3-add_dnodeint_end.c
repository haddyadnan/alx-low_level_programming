#include "lists.h"

/**
 * add_dnodeint_end - add node to end
 *
 * @head: head
 * @n: value
 * Return: dlistint_t*
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmpNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmpNode = *head;
	while (tmpNode->next)
	{
		tmpNode = tmpNode->next;
	}
	tmpNode->next = newNode;
	newNode->prev = tmpNode;
	return (newNode);
}
