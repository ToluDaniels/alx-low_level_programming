#include <stdio.h>
#include "main.h"

/**
 * main - Computes sum
 * Description: Adds all multiples of 3 and 5
 * Return: Zero
 */
int main(void)
{
	int i;
	int total;

	total = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total = total + i;
		}
	}
	printf("%d\n", total);
	return (0);
}
