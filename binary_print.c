#include "main.h"

/**
 * binary_print - prints the binary value of given number(unsigned)
 * @num: number to be converted to binary
 * Return: the length of printed 1's and 0's
 */

int binary_print(va_list num)
{
	unsigned int n = va_arg(num, unsigned int), hold;
	int x = 1, flag = 0, count = 0, i, bit;

	for (i = 0; i < 32; i++)
	{
		hold = ((x << (31 - i)) & n);
		if (hold >> (31 - i))
			flag = 1;
		if (flag == 1)
		{
			bit = hold >> (31 - i);
			_putchar(bit + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}


