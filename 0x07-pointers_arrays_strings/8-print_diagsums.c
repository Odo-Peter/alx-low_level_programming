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
	int sum1, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("Sum of diagonals = %d\n", sum1);
	printf("Sum of diagonals = %d\n", sum2);
}
