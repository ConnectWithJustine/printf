#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list ar;
    int count = 0;

    va_start(ar, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == '%')
            {
                _putchar('%');
                count++;
            }
            else if (*format == 'c' || *format == 's' || *format == 'd' ||
                     *format == 'i' || *format == 'b' || *format == 'u' ||
                     *format == 'o' || *format == 'x' || *format == 'X' ||
                     *format == 'p' || *format == 'R' || *format == 'r' ||
                     *format == 'S')
            {
                count += format_handler(*format, ar);
            }
            else
            {
                _putchar('%');
                _putchar(*format);
                count += 2;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(ar);

    return count;
}