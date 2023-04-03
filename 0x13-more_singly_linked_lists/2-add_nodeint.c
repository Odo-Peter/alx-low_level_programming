#include "list.h"

/**
 * add_nodeint - adds a node at the begining of a list
 * @head: a pointer to the head of the list
 * @n: the second params
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
