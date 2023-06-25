#include "main.h"

/**
 * print_string - Prints a string of characters.
 * @ar: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list ar)
{
	char *str = va_arg(ar, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	for (; *str != '\0'; str++)
	{
		if ((*str >= 0 && *str < 32) || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_hex(*str);
		}
		else
		{
			_putchar(*str);
			count++;
		}
	}

	return (count);
}