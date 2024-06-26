#include "search_algos.h"

/**
  * linear_search - searches for item in a list
  *@array: array to be searched
  *@size: size of the array
  *@value: value to search for
  * Return: Index of the searched value
  */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
