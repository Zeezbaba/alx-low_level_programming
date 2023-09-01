#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argv: arguments vector
 * @argc: arguments count
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
