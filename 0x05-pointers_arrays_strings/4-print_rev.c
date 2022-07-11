#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string in reverse,followed by a new line
 * @s : integer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			break;
			c++;
		}

		for (c-- ; c >= 0 ; c--)
		{
			putchar(s[c]);
		}
	}
		putchar('\n');

}
