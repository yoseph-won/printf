#include "main.h"

/**
 * binary_print - prints the binary value of given number(unsigned)
 * @num: number to be converted to binary
 * Return: the length of printed 1's and 0's
 */

int binary_print(va_list num)
{
	unsigned int n = va_arg(num, unsigned int), j;
	int bit, count = 0, i = sizeof(n) * 8 - 1, flag = 0;
	char *hold;

	hold = malloc(n);
	j = 0;
	while (i >= 0)
	{
		bit = (n >> i) & 1;
		hold[j] = bit + '0';
		i--;
		j++;
	}
	for (j = 0; hold[j] != '\0'; j++)
	{
		if (hold[j] == '0' && flag == 0)
			continue;
		flag = 1;
		_putchar(hold[j]);
		count++;
	}
	free(hold);
	return (count);
}


