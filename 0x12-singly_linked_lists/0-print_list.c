#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @elements: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *elements)
{
	size_t node = 0;

	for (; elements; elements = elements->next)
	{
		if (!elements->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", elements->len, elements->str);
		node++;
	}

	return (node);
}
