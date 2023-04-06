#include "lists.h"

/**
 * sum_listint - prints the sum of all data in a list
 * @head: the head of the node
 * Return: the sum of all data (n)
 */

int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}
