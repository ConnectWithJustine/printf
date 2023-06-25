#include "main.h"

/**
 * print_reverse - Prints a reversed string.
 * @ar: A va_list containing the string to be printed in reverse.
 *
 * Return: The number of characters printed.
 */
int print_reverse(va_list ar)
{
	char *str = va_arg(ar, char *);
	int length = _strlen(str);
	int count = 0;

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
