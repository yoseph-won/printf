#include "main.h"

/**
 * _printf - a function that is like the standard library of C (printf)
 * @format: any kind of type
 * Return: the number of characters printed to stdout
 */

int _printf(const char *format, ...)
{
	int count = 0, i, counter = 0;
	va_list args;
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
					str = va_arg(args, char *);
					while (str[counter] != '\0')
					{
						_putchar(str[counter++]);
					}
					count += counter - 1;
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



