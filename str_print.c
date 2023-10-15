#include "main.h"

/**
 * str_print - prints string
 * @s: given string
 * Return: the length of the string
 */

int str_print(char *s)
{
	int i;
	char *str;

	str = s;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

