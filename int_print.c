#include "main.h"
/**
 * num_print - prints integers
 * @num: number to be printed
 * Return: the length of the numbers
 */
int num_print(int num)
{
	int m, count = 0;

	if (num < 10 && num >= 0)
	{
		_putchar(num + '0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	m = num % 10;
	count += num_print(num / 10);
	_putchar(m + '0');
	count++;
	return (count);
}
/**
 * int_print - prints given integer by calling num_print
 * @n: passed integer
 * Return: the length of the numbers printed using num_print
 */

int int_print(va_list n)
{
	int num = va_arg(n, int), len;

	len = num_print(num);
	return (len);
}
