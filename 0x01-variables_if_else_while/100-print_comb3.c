#include <stdio.h>
/**
 * main - prints out chars in twos
 * Return: 0 for success
 */

int main(void)
{
	int i, j;

	/*the for loop to print in the chars*/
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
