#include "lists.h"

/**
 * insert_nodeint_at_index - this function should insert a new node in a linked list, at a particular position 
 * @head: serves as a pointer to the number one node in the list
 * @idx: this is the index where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: should return a pointer to the new node, or even NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int iidxx, int n)
{
	unsigned int k;
	listint_t *neww;
	listint_t *tempooo = *head;

	neww = malloc(sizeof(listint_t));
	if (!neww || !head)
		return (NULL);

	neww->n = n;
	neww->next = NULL;

	if (iidxx == 0)
	{
		neww->next = *head;
		*head = neww;
		return (neww);
	}

	for (k = 0; tempooo && k < iidxx; k++)
	{
		if (k == iidxx - 1)
		{
			neww->next = tempooo->next;
			tempooo->next = neww;
			return (neww);
		}
		else
			tempooo = tempooo->next;
	}

	return (NULL);
}
