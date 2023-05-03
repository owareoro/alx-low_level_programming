#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int ctr = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ctr++;
		ptr = ptr->next;
	}
	return (ctr);
}
