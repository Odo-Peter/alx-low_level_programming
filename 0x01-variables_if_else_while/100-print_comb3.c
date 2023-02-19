#include <stdio.h>
/**
 * main - prints out chars in twos
 * Return: 0 for success
 */

int main(void)
{
	int i;

	/*the for loop to print in the chars*/
	for (i = 1; i < 90; i++)
	{
		if (i % 10 == 0)
		{
			return;
		} else
		{
			if ( i < 10)
			{
				putchar(0);
				putchar(i);
			} else if ( i > 10)
			{
				putchar(i);
			}
		}
		putchar(44);
		putchar(32);
	}
	return (0);
}
