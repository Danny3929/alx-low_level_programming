#include <stdio.h>
#include "main.h"

/**
 * string_toupper - function that  of a string to uppercase
 * @s: string
 * Return: retunr s
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		if ((*(s + a) >= 97) && (*(s + a) <= 122))
		{
			*(s + a) = *(s + a) - 32;
			a++;
		}
	return (s);
}
