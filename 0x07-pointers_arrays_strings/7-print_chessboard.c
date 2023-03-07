#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array params
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j] + '0');
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
