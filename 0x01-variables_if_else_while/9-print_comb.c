#include <stdio.h>
/**
 * main - prints single digits
 * Return: 0 for success
 */

int main(void)
{
	int i;

	/*The for looping proper*/
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(" ");
	}
	putchar('\n');
	return (0);
}
