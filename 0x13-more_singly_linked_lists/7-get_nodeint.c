#include "lists.h"

/**
 * get_nodeint_at_index - serves to return the node at a very certain index in a linked list
 * @head: this shows the first node in the linked list
 * @index: this shows the index of the node that should be returned
 *
 * Return: the pointer to the node I am looking for should be returned, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *tempooooo = head;

	while (tempooooo && l < index)
	{
		tempooooo = tempooooo->next;
		l++;
	}

	return (tempooooo ? tempooooo : NULL);
}
