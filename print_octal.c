#include "main.h"

/**
 * print_octal - Prints an unsigned decimal number in octal format.
 * @ar: A va_list containing the unsigned decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list ar)
{
	unsigned int num = va_arg(ar, unsigned int);
	char buffer[20];
	int length;

	sprintf(buffer, "%o", num);
	length = _strlen(buffer);

	int i;
	for (i = 0; i < length; i++)
		_putchar(buffer[i]);

	return length;
}