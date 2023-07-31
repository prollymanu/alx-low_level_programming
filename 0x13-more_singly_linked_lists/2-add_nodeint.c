#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning of every linked list
 * @head:this is the  pointer of the first node in the list
 * @n: this shows data that is to be inserted in the new node
 *
 * Return: this should return pointer to the new node if succesful, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
