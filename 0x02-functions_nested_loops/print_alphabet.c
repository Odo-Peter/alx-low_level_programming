#include "main.h"
/**
 * main - prints all the chars of the alphabets
 * Return: 0 always
 */

void print_alphabet(void)
{
	char i;

	/*The for loop for printing each chars*/
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
