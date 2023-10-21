#include "main.h"

/**
 * hex_print - prints given unsigned int number in octal value
 * @h: number to be converted
 * Return: the length of the printed number
 */

int hex_print(va_list h)
{
	int count = 0, i, *hold;
	unsigned int hex = va_arg(h, unsigned int);
	unsigned int tmp = hex;

	while (hex / 16 != 0)
	{
		hex /= 16;
		count++;
	}
	count++;
	hold = malloc(sizeof(int) * count);

	i = 0;
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
			hold[i] += 39;
		_putchar(hold[i] + '0');
		i--;
	}
	free(hold);
	return (count);
}
