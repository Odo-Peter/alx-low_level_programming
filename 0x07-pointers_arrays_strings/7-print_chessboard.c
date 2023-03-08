#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: the array of values
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	char *c = a[0];
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", *c);
			c++;
		}
		printf("\n");
	}
}
