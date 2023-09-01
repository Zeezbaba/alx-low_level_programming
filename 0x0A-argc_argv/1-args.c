#include "main.h"
#include <stdio.h>

/**
 * main - prints number of argument passed on the program
 * @argv: arguments vector
 * @argc: arguments count
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
