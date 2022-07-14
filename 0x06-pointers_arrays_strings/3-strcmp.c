#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
