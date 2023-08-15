#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of the number
 */

int print_last_digit(int n)

{

	int ln;

	ln = n % 10;

	if (ln < 0)
	{
		ln = ln * -1;
	}
	_putchar(ln + '0');
	return (ln);
}
