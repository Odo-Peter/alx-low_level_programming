#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the array of values
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j, row_start;

	row_start = 1;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (row_start == 1) {
				a[i][j] = 1;
			} else {
				a[i][j] = 0;
			}
			row_start *= -1;
		}
		row_start *= -1;
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%d ", *(a[i] + j));
		}
		printf("\n");
	}
}
