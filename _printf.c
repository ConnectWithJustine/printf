#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char current_char;

	va_start(args, format);

	while ((current_char = *format++) != '\0')
	{
		if (current_char == '%')
		{
			if (*format == '%')
			{
				_putchar('%');
				count++;
				format++;
			}
			else if (*format)
			{
				count += format_handler(*format++, args);
			}
		}
		else
		{
			_putchar(current_char);
			count++;
		}
	}

	va_end(args);

	return (count);
}
