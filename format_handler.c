#include "main.h"

/**
 * format_handler - Handles the formatting of a single conversion specifier.
 * @specifier: The conversion specifier character.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int format_handler(char specifier, va_list args)
{
	switch (specifier)
	{
	case 'c':
		return (print_char(args));
	case 's':
		return (print_string(args));
	case 'd':
	case 'i':
		return (print_decimal(args));
	case 'b':
		return (print_binary(args));
	case 'u':
		return (print_unsigned_int(args));
	case 'o':
		return (print_octal(args));
	case 'x':
		return (print_hexadecimal_lower(args));
	case 'X':
		return (print_hexadecimal_upper(args));
	case 'p':
		return (print_pointer(args));
	case 'R':
		return (print_rot13(args));
	case 'S':
		return (print_string(args));
	case 'r':
		return (print_reverse(args));
	default:
		_putchar('%');
		_putchar(specifier);
		return (2);
	}
}
