#include <stdio.h>

/**
 * main - Liber Abbaci
 * Description: Finds and prints the sum of even-valaues terms
 * Return: Zero
 */
int main(void)
{
	unsigned long num, seq, sum, total;

	num = 1;
	seq = 2;
	sum = 0;
	while (sum < 4000000)
	{
		sum = num + seq;
		num = seq;
		seq = sum;
		if ((num % 2) == 0)
		{
			total += num;
		}
	}
	printf("%ld\n", total);
	return (0);
}
