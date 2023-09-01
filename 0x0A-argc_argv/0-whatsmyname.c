#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
