#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node at the end of a linked list
 * @head: this directs a pointer to the first element in the list
 * @n: this shows the data to be inserted in the new element
 *
 * Return: if succesful, pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempooo = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tempooo->next)
		tempooo = tempooo->next;

	tempooo->next = new;

	return (new);
}
