#include <stdio.h>
/**
 * main - prints the alphabets in small caps
 * Return: 0 for a successfully execution
 */
int main(void)
{
	int a;
	for (a = 'A'; a < 'Z'; a++)
	{
		char alphabet_small = tolower(a);
		putchar(alphabet_small);
	}
	return (0);
}
