#include "lists.h"

/**
 * pop_listint - this function permanently deletes the head node of a linked list
 * @head: this serves as the pointer to the first element of the linked list
 *
 * Return: this function returns the data inside the elements that was deleted,
 * or zero if the list deleted is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempoooo;
	int namba;

	if (!head || !*head)
		return (0);

	namba = (*head)->n;
	tempoooo = (*head)->next;
	free(*head);
	*head = tempoooo;

	return (namba);
}
