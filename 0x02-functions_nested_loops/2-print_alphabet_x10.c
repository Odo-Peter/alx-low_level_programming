#include "main.h"
/**
 * print_alphabet_x10 - prints the chars of the alphabets 10x
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;
	/*The for and while loops*/
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
