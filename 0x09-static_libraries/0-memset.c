#include "main.h"

/**
 * *_memset - fills a block of memory with a specific value
 * @s: addrss of memory to be filled
 * @b: value
 * @n: no. of bytes to be changed
 * Return: array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
