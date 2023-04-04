#include "lists.h"

/**
 * pop_listint - deletes the head of a node in linked list
 * @head: a pointer to the pointer to the head of the node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *list_node;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	list_node = *head;
	head_node = list_node->n;
	temp = list_node->next;

	free(list_node);
	*head_node = temp;

	return (head_node);
}
