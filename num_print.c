#include "main.h"

/**
 * num_print - prints numbers recursively
 * @n: number to print
 */

int num_print(int n)
{
	int m, count = 0;

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
		count++;
		return (count);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n % 10;
	count += num_print(n / 10);
	_putchar(m + '0');
	count++;
	return (count);

}
