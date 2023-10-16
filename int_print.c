#include "main.h"

/**
 * int_print - print a given integer
 * @args: given integer
 * Return: the length
 */

int int_print(va_list args)
{
	int number = va_arg(args, int);
	int num, last_digit, digit, exp = 1, x, y;
	int count = 1;

	last_digit = number % 10;
	number /= 10;
	num = number;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		last_digit = -last_digit;
		count++;
	}
	if (num > 0)
	{
		for (x = 0; num / 10 != 0; x++)
		{
			exp *= 10;
			num /= 10;
		}
		num = number;
		for (y = 0; exp > 0; y++)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp /= 10;
			count++;
		}
	}
	_putchar(last_digit + '0');
	return (count);
}

/**
 * dec_print - print a given integer
 * @args: given integer
 * Return: the printed integer length
 */

int dec_print(va_list args)
{
	int number = va_arg(args, int);
	int num, last_digit, digit, exp = 1, x, y;
	int count = 1;

	last_digit = number % 10;
	number /= 10;
	num = number;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		number = -number;
		last_digit = -last_digit;
		count++;
	}
	if (num > 0)
	{
		for (x = 0; num / 10 != 0; x++)
		{
			exp *= 10;
			num /= 10;
		}
		num = number;
		for (y = 0; exp > 0; y++)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp /= 10;
			count++;
		}
	}
	_putchar(last_digit + '0');
	return (count);
}
