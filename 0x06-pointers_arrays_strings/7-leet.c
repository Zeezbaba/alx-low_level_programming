#include "main.h"

/**
 * *leet - encode a string into 1337
 * @s: input value
 * Return: s value
 */

char *leet(char *s)
{
	int lg, ct;
	char p1[] = "aAeEoOtTlL";
	char p2[] = "4433007711";

	for (lg = 0; s[lg] != '\0'; lg++)
	{
		for (ct = 0; ct < 10; ct++)
		{
			if (s[lg] == p1[ct])
			{
				s[lg] = p2[ct];
			}
		}
	}
	return (s);
}
