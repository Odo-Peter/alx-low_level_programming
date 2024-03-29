#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: the head of a list.
 * Return: address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *prev_node;

	p = head;
	prev_node = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = prev_node;
			prev_node = p;
			while (1)
			{
				p = prev_node;
				while (p->next != head && p->next != prev_node)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
