#include "main.h"

/**
 * print_hexadecimal_upper - Prints an unsigned decimal number
 * in uppercase hexadecimal format.
 * @ar: A va_list containing the unsigned decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hexadecimal_upper(va_list ar)
{
	unsigned int num = va_arg(ar, unsigned int);
	char buffer[20];
	int i, length;

	sprintf(buffer, "%X", num);
	length = _strlen(buffer);

	for (i = 0; i < length; i++)
		_putchar(buffer[i]);

	return (length);
}
