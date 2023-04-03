#include "lists.h"

/**
 * listint_len - prints the number of elements in a list
 * @h: the head of the list params
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
