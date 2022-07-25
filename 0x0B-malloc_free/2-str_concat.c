#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - counts the length of the string
 * @s: string to be counted
 * Return: the length of string
 */

int _strlen(char *s)
{
	unsigned int l = 0;

	while (*s != '\0')
		s++;
	l++;
	return (l);
}

/**
 * str_concat - funtion that concatenates 2 strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: ' ' if NULL is passed and return NULL on failure
 * Return: combination of both strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *s3, *s4;

	if (s1 == NULL)
		return (" ");
	else
		l1 = _strlen(s1);

	if (s2 == NULL)
		return (" ");
	else
		l2 = _strlen(s2);

	s3 = malloc(l1 +l2 + 1);

	if (s3 == NULL)
		return (0);
	s4 = s3;
	while (*s1)
		s4++ = s1++;
	while (*s2)
		s4++ = s2++;
	return (s3);
}
