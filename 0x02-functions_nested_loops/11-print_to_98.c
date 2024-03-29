#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the first printed number
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}

	else
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	putchar('\n');
}
