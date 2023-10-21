#include "main.h"

/**
 * hex_ll - prints hex
 * @n: number
 * Return: printed length
 */
int hex_ll(unsigned int n)
{
	int *hold, count = 0, i = 0;
	unsigned int tmp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	hold = malloc(sizeof(int) * count);
	while (i < count)
	{
		hold[i] = tmp % 16;
		tmp /= 16;
		i++;
	}
	i = count - 1;
	while (i >= 0)
	{
		if (hold[i] > 9)
			hold[i] += 7;
		_putchar(hold[i] + '0');
	}
	free(hold);
	return (count);
}

/**
 * print_String - prints string exclusively
 * @str: passed string
 * Return: the length of the string
 */

int print_String(va_list str)
{
	char *s;
	int c, i, l = 0;

	s = va_arg(str, char *);
	if (s == NULL)
		s = ("(null)");
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('X');
			c = s[i];
			l += 2;
			if (c < 16)
			{
				_putchar('0');
				l++;
			}
			l += hex_ll(c);
		}
		else
		{
			_putchar(s[i]);
			l++;
		}
	}
	return (l);
}
