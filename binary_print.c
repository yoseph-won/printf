#include "main.h"

/**
 * binary_print - prints the binary value of given number(unsigned)
 * @num: number to be converted to binary
 * Return: the length of printed 1's and 0's
 */

int binary_print(va_list num)
{
	unsigned int n = va_arg(num, int);
	int i, j, count = 0;
	char *hold;

	hold = malloc(n);
	i = 0;
	while (n > 0)
	{
		hold[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	j = 0;
	while (hold[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(hold[i]);
		count++;
	}
	free(hold);
	return (count);
}


