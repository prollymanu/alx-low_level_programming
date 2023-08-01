#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes in the loop
 * @head: this is a pointer to the head of the listint_t so as to check.
 *
 * Return: should return - 0 if the list is not looped. or otherwise the number or numbers of the unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *torttoisse, *haaarrreee;
	size_t nooddees = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	torttoisse = head->next;
	haaarrreee = (head->next)->next;

	while (haaarrreee)
	{
		if (torttoisse == haaarrreee)
		{
			torttoisse = head;
			while (torttoisse != haaarrreee)
			{
				nooddees++;
				torttoisse = torttoisse->next;
				haaarrreee = haaarrreee->next;
			}

			torttoisse = torttoisse->next;
			while (torttoisse != haaarrreee)
			{
				nooddees++;
				torttoisse = torttoisse->next;
			}

			return (nooddees);
		}

		torttoisse = torttoisse->next;
		haaarrreee = (haaarrreee->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function should Print a listint_t list safely.
 * @head: shows a pointer to the head of the listint_t list.
 *
 * Return: should return the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nooddees, index = 0;

	nooddees = looped_listint_len(head);

	if (nooddees == 0)
	{
		for (; head != NULL; nooddees++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nooddees; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nooddees);
}
