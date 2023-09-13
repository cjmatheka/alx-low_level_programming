#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9times table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;
	int ij;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ij = i * j;

			_putchar(ij + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			else
			{
				_putchar('\n');
			}
		}
	}
}
