#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: void
 */

void print_alphabet_x10(void);
{
	int alphabets, i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (alphabets = 97 ; alphabets <= 122 ; alphabets++)
		{
			putchar(alphabets);
		}
		putchar('\n');
	}
}
