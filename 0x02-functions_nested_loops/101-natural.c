#include <stdio.h>

/**
 * main - Prints the sum of all multiple of 3 or 5 up to 1024
 * Return: Always 0 (success)
 */

int main(void)

{

	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
