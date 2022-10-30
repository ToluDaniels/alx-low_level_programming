#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet
 * Description: Prints alphabet 10 times
 * Return: Zero
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}

}
