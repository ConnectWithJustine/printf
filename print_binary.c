#include "main.h"

/**
 * print_binary - Prints a decimal number in binary format.
 * @ar: A va_list containing the decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list ar)
{
	unsigned int num = va_arg(ar, unsigned int);
	int length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	unsigned int j = num;

	while (j > 0)
	{
		j = j >> 1;
		length++;
	}

	int binary[length];
	int i = 0;

	while (num > 0)
	{
		binary[i] = num & 1;
		num = num >> 1;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar('0' + binary[i]);
	}
	return (length);
}
