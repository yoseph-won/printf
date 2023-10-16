#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
	int count = 0, i, j, flag;
	va_list args;
	format_func arr[] = {
		{"%c", char_print}, {"%s", str_print}, {"%%", percent},
		{"%i", int_print}, {"%d", int_print}
	};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; j < 5; j++)
		{
			if (format[i] == arr[j].fmt[0] && format[i + 1] == arr[j].fmt[1])
			{
				count += arr[j].func(args);
				i++;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			continue;
		_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
