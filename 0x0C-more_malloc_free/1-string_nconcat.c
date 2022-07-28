#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *l;
	unsigned int s3 = 0, s4 = 0, i;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");
	while (s1[s3] != '\0')
		s3++;
	while (s2[s4] != '\0')
		s4++;
	if (n > s4)
		n = s4;
	l = malloc((s3 + n + 1) * sizeof(char));

	if (l == NULL)
		return (0);
	for (i = 0 ; i < s3 ; i++)
		p[i] = s1[i];
	for (; i < (s3 + n) ; i++)
		p[i] = s2[i - s3];
	p[i] = '\0';

	return (p);
}
