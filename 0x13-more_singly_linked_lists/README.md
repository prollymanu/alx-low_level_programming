0x13. C - More singly linked lists
Tasks
0. Print list
Write a function that prints all the elements of a listint_t list.
1. List length
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);
2. Add node
Write a function that adds a new node at the beginning of a listint_t list.
3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
4. Free list
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);
5. Free
Write a function that frees a listint_t list.
6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
7. Get node at index
Write a function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked link
9. Insert
Write a function that inserts a new node at a given position.
10. Delete at index
mandatory
Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
