#include "main.h"

/**
 * print_decimal - Prints a decimal (int) number.
 * @ar: A va_list containing the decimal number to be printed.
 *
 * Return: The number of characters printed.
 */
int
print_decimal(va_list ar)
{
    int num = va_arg(ar, int);
    char buffer[20];
    int length;

    sprintf(buffer, "%d", num);
    length = _strlen(buffer);

    for (int i = 0; i < length; i++) {
        _putchar(buffer[i]);
    }

    return (length);
}
