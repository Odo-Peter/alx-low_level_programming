#include <stdio.h>
#include "main.h"
/**
 * times_table - prints all values that multiples of nine
 * Return: no return value in a void function
 */

void times_table(void)
{
	int i = 0, j, k;
	char c = ',';
	/*The loops goes in here*/
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = j * i;
			printf("%d%c ", k, c);
			j++;
		}
		printf("\n");
		i++;
	}
}
