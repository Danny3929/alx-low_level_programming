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
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *conc, *tmp;

	printf("checking:%s", s1);

	if (s1 == NULL)
		s1 = " ";
	else
		l1 = _strlen(s1);
	printf("checking:%s\n ", s1);
	printf("checking:%ld\n", sizeof(s1));

	if (s2 == NULL)
		s2 = " ";
	else
		l2 = _strlen(s2);
	printf("checking:%s\n",s2);

	conc = malloc(l1 + l2 + 1);
	if (conc == NULL)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;
	printf("checking:%ld\n", sizeof(s1));
	while ((*tmp++ = *s2++))
	;

	printf("tmp:%c ", *tmp);

	return (conc);
}
