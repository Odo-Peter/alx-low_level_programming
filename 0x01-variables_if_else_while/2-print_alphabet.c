#include <stdio.h>
/**
 * main - prints the alphabets in small caps
 * Return: 0 for a successfully execution
 */
int main(void)
{
	char a;
	putchar('\n');
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	return (0);
}
