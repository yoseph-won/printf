#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;
			switch (format[i])
			{
				case '\0':
					break;
				case '%':
					_putchar('%');
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					count += str_print(va_arg(args, char *));
					break;
				default:
					continue;
			}
		}
		count++;
	}
	va_end(args);
	return (count);
}



