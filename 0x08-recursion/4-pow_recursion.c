#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - returns value of x raised to power y,
 * @x: value to raise,
 * @y: power of,
 * Return: x to power y, else -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
