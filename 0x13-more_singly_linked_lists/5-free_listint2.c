#include "lists.h"

/**
 * free_listint2 - frees a linked lists
 * @head: pointer to a pointer of the head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *list_node;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((list_node = temp) != NULL)
		{
			temp = temp->next;
			free(list_node);
		}
		*head = NULL;
	}
}
