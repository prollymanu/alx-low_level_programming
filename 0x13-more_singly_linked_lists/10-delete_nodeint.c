#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node in a linked list at a certain index
 * @head: shows a pointer of the first element in the list
 * @index: shows the index of the node that should be  deleted
 *
 * Return: should return 1 if successful, or -1 if it is a fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempppooo = *head;
	listint_t *cuurrenntt = NULL;
	unsigned int f = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempppooo);
		return (1);
	}

	while (f < index - 1)
	{
		if (!tempppooo || !(tempppooo->next))
			return (-1);
		tempppooo = tempppooo->next;
		f++;
	}


	cuurrenntt = tempppooo->next;
	tempppooo->next = cuurrenntt->next;
	free(cuurrenntt);

	return (1);
}
