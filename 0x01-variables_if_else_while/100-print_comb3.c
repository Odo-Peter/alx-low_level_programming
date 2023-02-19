#include <stdio.h>
/**
 * main - prints out chars in twos
 * Return: 0 for success
 */

int main(void)
{
	int i, j;

	/*the for loop to print in the chars*/
	for (i = 1; i <= 90; i++)
	{
		for (j = 1; j <= 90; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar(44);
	putchar(32);
	return (0);
}
