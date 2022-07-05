#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that returns void
 * main - Entry point
 * declaration : print_alphabet in small letters
 * Return: Void
 *
 */

void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
