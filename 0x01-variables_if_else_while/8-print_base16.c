#include <stdio.h>
/**
 * main - prints the hexadecimals values
 * Return: 0 for success
 */

int main(void)
{
	int c;

	/*first for loop for 0-9*/
	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
