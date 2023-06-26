#include "main.h"

/**
 * print_pointer - Prints a pointer address.
 * @ar: A va_list containing the pointer address to be printed.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list ar)
{
	void *ptr = va_arg(ar, void *);
	char buffer[20];
	int i, length;

	sprintf(buffer, "%p", ptr);
	length = _strlen(buffer);

	for (i = 0; i < length; i++)
		_putchar(buffer[i]);

	return (length);
}
