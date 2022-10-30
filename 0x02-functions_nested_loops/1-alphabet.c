#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Description: Prints alphabet
 * Return: Zero
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
