#include "lists.h"

/**
 * sum_listint - this function helps to calculate the sum of all the data in a listint_t list
 * @head: directs us to the first node in the linked list
 *
 * Return: the sum we are looking for
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempooooo = head;

	while (tempooooo)
	{
		sum += tempooooo->n;
		tempooooo = tempooooo->next;
	}

	return (sum);
}
