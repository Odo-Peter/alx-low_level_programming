#include "lists.h"

/**
 * get_nodeint_at_index - prints the nth node of a linked list
 * @head: the head of the node
 * @index: the index params of the node
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
