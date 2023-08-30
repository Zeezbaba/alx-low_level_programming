#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string to be measured
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
