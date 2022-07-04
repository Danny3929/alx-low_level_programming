#include <stdio.h>

/**
 *
 * main - Entry point
 * Return: Always 0
 *
 */
int main(void)
{
	int h;
	int t;
	int o;

	for (h = 0 ; h <= 9 ; h++)
	{
		for (t = h + 1 ; t <= 9 ; t++)
		{
			for (o = o + 1 ; o <= 9 ; o++)
			{
				putchar(h + '0');
				putchar(t + '0');
				putchar(o + '0');

			if (h < 7)
			{
			if (t < 8)
			{
			putchar(',');
			putchar(' ');
			}
			}
			}
		}
	}
	return(0);
}
