#include "main.h"

/**
 * rot13 - prints the 13th car
 * @arg: passed va_list type
 * Return: the length
 */

int rot13(va_list arg)
{
	int i, j, k = 0, count = 0;
	char *let1 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char *let2 = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; let1[j] && !k; j++)
		{
			if (s[i] == let1[j])
			{
				_putchar(let2[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
