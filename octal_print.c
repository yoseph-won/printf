#include "main.h"

/**
 * octal_print - prints given unsigned int number in octal value
 * @o: number to be converted
 * Return: the length of the printed number
 */

int octal_print(va_list o)
{
	int count = 0, i, *hold;
	unsigned int oct = va_arg(o, unsigned int);
	unsigned int tmp = oct;

	while (oct / 8 != 0)
	{
		oct = oct / 8;
		count++;
	}
	count++;
	hold = malloc(sizeof(int) * count);

	i = 0;
	while (i < count)
	{
		hold[i] = tmp % 8;
		tmp /= 8;
		i++;
	}

	i = --count;
	while (i >= 0)
	{
		_putchar(hold[i] + '0');
		i--;
	}
	free(hold);
	return (count);
}
