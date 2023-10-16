#include "main.h"

/**
 * str_print - prints string
 * @s: given string
 * Return: the length of the string
 */

int str_print(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

