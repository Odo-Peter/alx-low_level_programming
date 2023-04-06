#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: the head of a list.
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new_node, *add_node;
	listint_t *current;

	hptr = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (n_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		n_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (n_nodes);
}
