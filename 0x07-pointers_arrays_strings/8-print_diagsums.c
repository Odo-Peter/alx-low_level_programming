#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two square matrix
 * @a: first params
 * @size: second params
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum = 0;
	int i;
	int *c = a;

	for (i = 0; i < size; i++)
	{
		sum += *c;
		c += size + 1;
	}
	c = a + size - 1;
	for (i = 0; i < size; i++)
	{
		sum += *c;
		c += size - 1;
	}
	printf("Sum of diagonals = %d\n", sum);
}
