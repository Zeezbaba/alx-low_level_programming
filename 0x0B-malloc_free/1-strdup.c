#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicate function
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dup[j] = str[j];
	return (dup);
}
