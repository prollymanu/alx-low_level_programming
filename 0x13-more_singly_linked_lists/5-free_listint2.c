#include "lists.h"

/**
 * free_listint2 - this function works to free a linked list
 * @head: this is a pointer to the listint_t list that should  be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempoooo;

	if (head == NULL)
		return;

	while (*head)
	{
		tempoooo = (*head)->next;
		free(*head);
		*head = tempoooo;
	}

	*head = NULL;
}

