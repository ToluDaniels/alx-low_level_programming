#include "main.h"

/**
 * print_last_digit - prints the last digit
 * Description: Last digits
 * @v: Val
 * Return: Zero
 */
int print_last_digit(int v)
{
	int r;

	if (v >= 0)
	{
		r = v % 10;
		_putchar(r + '0');
	}
	else
	{
		r = -(v % 10);
		_putchar(r + '0');
	}

	return (r);
}
