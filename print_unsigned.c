#include "main.h"

/**
 * print_unsigned - Prints an unsigned decimal number.
 * @ar: A va_list containing the unsigned decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list ar)
{
	unsigned int num = va_arg(ar, unsigned int);
	char buffer[20];
	int length;

	sprintf(buffer, "%u", num);
	length = _strlen(buffer);

	for (int i = 0; i < length; i++)
		_putchar(buffer[i]);

	return (length);
}
