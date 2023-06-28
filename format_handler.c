#include "main.h"

/**
 * format_handler - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @ind: ind.
 * @list: List of arguments to be printed.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @wth: get width.
 * @precision: Precision specification
 * @sz: Size specifier
 * Return: 1 or 2;
 */
int format_handler(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int wth, int precision, int sz)
{
	int unknow_len = 0, printed_chars = -1;

	switch (fmt[*ind])
	{
		case 'c': return (print_char(list, buffer, flags, wth, precision, sz));
		case 's': return (print_string(list, buffer, flags, wth, precision, sz));
		case '%': return (print_percent(list, buffer, flags, wth, precision, sz));
		case 'i':
		case 'd': return (print_int(list, buffer, flags, wth, precision, sz));
		case 'b': return (print_binary(list, buffer, flags, wth, precision, sz));
		case 'u': return (print_unsigned_int(list, buffer, flags, wth, precision, sz));
		case 'o': return (print_octal(list, buffer, flags, wth, precision, sz));
		case 'x':
	return (print_hexadecimal(list, buffer, flags, wth, precision, sz));
		case 'X': return (print_hexa_upper(list, buffer, flags, wth, precision, sz));
		case 'p': return (print_pointer(list, buffer, flags, wth, precision, sz));
		case 'S':
	return (print_non_printable(list, buffer, flags, wth, precision, sz));
		case 'r': return (print_reverse(list, buffer, flags, wth, precision, sz));
		case 'R':
	return (print_rot13string(list, buffer, flags, wth, precision, sz));
		case '\0': return (-1);
		default:
			if (fmt[*ind - 1] == ' ')
				unknow_len += write(1, " ", 1);
			else if (wth)
			{
				--(*ind);
				while (fmt[*ind] != ' ' && fmt[*ind] != '%')
					--(*ind);
				if (fmt[*ind] == ' ')
					--(*ind);
				return (1);
			}
			unknow_len += write(1, &fmt[*ind], 1);
			return (unknow_len);
	}
	return (printed_chars);
}
