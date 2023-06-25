#include "main.h"

/**
 * print_rot13 - Prints a string encoded in rot13.
 * @ar: A va_list containing the string to be printed in rot13.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list ar)
{
	char *str = va_arg(ar, char *);
	int length = _strlen(str);

	for (int i = 0; i < length; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			_putchar(str[i] + 13);
		else if
			((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			_putchar(str[i] - 13);
		else
			_putchar(str[i]);
	}
	return (length);
}
