#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, flags, width, precision, size, buff_in, printed, printed_chars;
	va_list list;
	char buffer[BUFF_SIZE];
	buff_in = printed = printed_chars = 0;

	if (!format)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_in++] = format[i];
			if (buff_in == BUFF_SIZE)
				print_buffer(buffer, &buff_in);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_in);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = format_handler(format, &i, list, buffer,
								   flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_in);

	va_end(list);

	return (printed_chars);
}