#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
	va_list args;
	size_t i, j, count = 0;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case '\0':
					va_end(args);
					return (-1);
				case 's':
					str = va_arg(args, char *);
					for (j = 0; str[j] != '\0'; j++)
						_putchar(str[j]);
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					break;
			}
			i++;
		}
		count++;
	}
	va_end(args);
	return (count);
}
