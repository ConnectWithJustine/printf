#include "main.h"

/**
 * print_unsigned - Prints an unsigned decimal number.
 * @args: A va_list containing the unsigned decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[1024];
	int i = 1024 - 2;
	int flags = _MINUS;
	int width = 10;

	if (num == 0)
		buffer[i--] = '0';

	buffer[1024 - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(buffer + i, 1024 - i - 1, flags, width));
}
