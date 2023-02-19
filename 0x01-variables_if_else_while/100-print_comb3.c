#include <stdio.h>
/**
 * main - prints out chars in twos
 * Return: 0 for success
 */

int main(void)
{
	int i;

	/*the for loop to print in the chars*/
	for (i = 49; i < 48; i++)
	{
		if (i % 48 == 0)
		{
			return (-1);
		} else
		{
			if ( i < 48)
			{
				putchar(48);
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
