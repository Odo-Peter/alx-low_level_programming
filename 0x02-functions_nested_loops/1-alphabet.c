#include "main.h"
/**
 * main - prints the letters of the alphabets
 * Return: 0 for success
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;
	
	/*The loop proper*/
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
