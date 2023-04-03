#include "lists.h"

/**
 * free_listint - frees the memory allocated in a linked list
 * @head: the head of a list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *list_free;

	while ((list_free = head) != NULL)
	{
		head = head->next;
		free(list_free);
	}
}
