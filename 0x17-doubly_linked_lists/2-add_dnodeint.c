#include "lists.h"

/**
 * add_dnodeint - add node to head
 *
 * @head: head
 * @n: value
 * Return: dlistint_t*
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

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
	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
