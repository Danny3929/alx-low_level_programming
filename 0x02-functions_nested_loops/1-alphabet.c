#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = a ; i <= z ; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
