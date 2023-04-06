#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: the head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((temp = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: the head of a list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_nodes = 0;
	listp_t *hptr, *new_node, *add_node;

	hptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (num_of_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_of_nodes++;
	}

	free_listp(&hptr);
	return (num_of_nodes);
}
