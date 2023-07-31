#include "lists.h"

/**
 * print_listint -this prints all the elements that is associated with a linked list
 * @k:shows linked list of type listint_t that should be to printed
 * Return: the number of nodes if correct 
 */
size_t print_listint(const listint_t *k)
{
	size_t namba = 0;

	while (k)
	{
		printf("%d\n", k->e);
		namba++;
		k = k->next;
	}

	return (namba);
}
