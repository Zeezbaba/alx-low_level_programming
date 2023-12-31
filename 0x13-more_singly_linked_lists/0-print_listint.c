#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @elements: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *elements)
{
	size_t zeez = 0;

	while (elements)
	{
		printf("%d\n", elements->n);
		zeez++;
		elements = elements->next;
	}

	return (zeez);
}
