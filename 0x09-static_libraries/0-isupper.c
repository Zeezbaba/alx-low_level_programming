#include "main.h"

/**
 * _isupper - function to check uppercase letters
 * @c: input
 * Return: return 1 (if uppercse), else retuurn 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
