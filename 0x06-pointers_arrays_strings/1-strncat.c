#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: number of bytes to be concetenated
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght_of_string, z;
	/* z is a counter for n bytes of src to be concatenated */
	/* lenght_of_string = lenght of destination string */

	lenght_of_string = 0;
	while (dest[lenght_of_string] != '\0')
	{
		lenght_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, lenght_of_string++)
	{
		dest[lenght_of_string] = src[z];
	}
	dest[lenght_of_string] = '\0';
	return (dest);
}
