#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @noe: pointer to the list_t list
 *
 * Return: number of elements in noe
 */
size_t list_len(const list_t *noe)
{
	size_t count = 0;

	while (noe)
	{
		count++;
		noe = noe->next;
	}
	return (count);
}
