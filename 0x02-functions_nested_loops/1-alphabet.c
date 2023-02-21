#include "main.h"
/**
 * main - prints the letters of the alphabets
 * Return: 0 for success
 */

int main(void)
{
	char i;

	/*The for loop of the chars*/
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
