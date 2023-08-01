#include "lists.h"

/**
 * reverse_listint - this should reverse a linked list
 * @head: this shows a pointer to the first node in the list
 *
 * Return: this is the pointer of the first node to the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *preevv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = preevv;
		preevv = *head;
		*head = next;
	}

	*head = preevv;

	return (*head);
}
