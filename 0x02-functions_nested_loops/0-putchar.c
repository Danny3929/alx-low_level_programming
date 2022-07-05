#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char y[8] = "_putchar";
	int l;

	for (l = 0 ; l < 8; l++)
	{
		putchar(y[l]);
	}
	putchar('\n');
	return (0);
}
