#include "main.h"

/**
 * decimal_print - is a function that prints unsigned decimal
 * @dec: given number to be printed
 * Return: the length of printed number
 */

int decimal_print(va_list dec)
{
	unsigned int num = va_arg(dec, unsigned int);
	int last = num % 10, n, dig, ex = 1, count = 1;

	num = num / 10;
	n = num;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		num = -num;
		last = -last;
		count++;
	}

	if (n > 0)
	{
		while (n / 10 != 0)
		{
			ex *= 10;
			n /= 10;
		}
		n = num;
		while (ex > 0)
		{
			dig = n / ex;
			_putchar(dig + '0');
			n -= (dig * ex);
			ex /= 10;
			count++;
		}
	}
	_putchar(last + '0');
	return (count);
}
