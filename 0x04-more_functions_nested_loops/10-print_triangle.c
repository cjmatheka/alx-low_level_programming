#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * return: 0.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - 1; j > 0; j--)
			{
				_putchar(' ');
			}

			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
