#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - prints all elements of a listint
 * @h: Where its located
 * Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
