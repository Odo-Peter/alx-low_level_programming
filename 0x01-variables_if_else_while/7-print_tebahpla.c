#include <stdio.h>
/**
 * main - prints the alphabets in reverese other
 * Return: 0 for success
 */

int main(void)
{
	char s;

	/*iteration of reverse alphabets*/
	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
