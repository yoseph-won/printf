#include "main.h"

/**
 * reverse - print string in reverse
 * @arg: argument
 * Return: the length
 */

int reverse(va_list arg)
{
	int i, len;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		s = "(null)";
	len = 0;
	while (s[j] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	return (len);
}
