#include "main.h"

/**
 * print_char - Prints a single character.
 * @ar: A va_list containing the character to be printed.
 *
 * Return: Always returns 1 (number of characters printed).
 */
int print_char(va_list ar)
{
    char c = va_arg(ar, int);
    _putchar(c);
    return (1);
}