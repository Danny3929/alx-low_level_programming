#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: character
 * Return: Always
 */

void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++
	}
}
