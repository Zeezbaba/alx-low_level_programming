#include "main.h"

/**
 * *string_toupper - changes all lowercase of a string to uppercase
 * @x: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *x)
{
	int lenght_of_string;

	lenght_of_string = 0;

	while (x[lenght_of_string] != '\0')
	{
		if (x[lenght_of_string] >= 97 && x[lenght_of_string] <= 122)
		{
			x[lenght_of_string] = x[lenght_of_string] - 32;
		}
		lenght_of_string++;
	}
	return (x);
}
