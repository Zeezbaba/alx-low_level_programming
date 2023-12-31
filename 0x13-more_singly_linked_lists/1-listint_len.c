#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @elements: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *elements)
{
	size_t zeez = 0;

	while (elements)
	{
		zeez++;
		elements = elements->next;
	}

	return (zeez);
}
