#include "lists.h"

/**
 * free_listint - this function should free a linked list
 * @head: listint_t this is the list to be freed in the code
 */
void free_listint(listint_t *head)
{
	listint_t *tempooo;

	while (head)
	{
		tempooo = head->next;
		free(head);
		head = tempooo;
	}
}
