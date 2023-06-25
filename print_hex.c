#include "main.h"

/**
 * print_hex - Prints the hexadecimal representation of a character.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex(char c)
{
    char hex_digits[] = "0123456789ABCDEF";
    int count = 0;

    _putchar(hex_digits[(c >> 4) & 0xF]);
    _putchar(hex_digits[c & 0xF]);

    count += 2;

    return (count);
}