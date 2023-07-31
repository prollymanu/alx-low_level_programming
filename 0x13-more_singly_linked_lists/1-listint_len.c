#include "lists.h"

/**
 * listint_len - returns the total number of elements in a linked lists
 * @k:this is the linked list of type listint_t to traverse in this task
 *
 * Return: number of nodes should be returned
 */
size_t listint_len(const listint_t *k)
{
	size_t namba = 0;

	while (k)
	{
		namba++;
		k = k->next;
	}

	return (namba);
}
