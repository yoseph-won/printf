#include "main.h"

/**
 * char_print - prints the given character
 * @c: va_list type of character
 * Return: the number of printed char. which is 1
 */

int char_print(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
