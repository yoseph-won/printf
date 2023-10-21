#include "main.h"

/**
 * ptr_hex - prints hex num
 *
 * @n: passed num
 * Return: length
 */
int ptr_hex(unsigned long int n)
{
	long int *hold, i, count = 0;
	unsigned long int tmp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	hold = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		hold[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = count - 1; i >= 0; i++)
	{
		if (hold[i] > 9)
			hold[i] += 39;
		_putchar(hold[i] + '0');
	}
	free(hold);
	return (count);
}

/**
 * print_ptr - prints hex
 * @ptr: arg
 * Return: number of char
 */

int print_ptr(va_list ptr)
{
	void *pr;
	int i, j;
	long ing k;
	char *str = "(nil)";

	pr = va_arg(ptr, void *);

	if (pr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	k = (unsigned long int)pr;
	_putchar('0');
	_putchar('x');
	j = ptr_hex(k);
	return (j + 2);
}
