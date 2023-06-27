#include "main.h"
/**
 * write_unsgnd - Writes an unsigned number
 * @buffer: Array of chars containing the number to be written
 * @length: Length of the number in the buffer
 * @flags: Flags specifiers
 * @width: Width specifier
 *
 * Return: Number of written chars.
 */
int write_unsgnd(char buffer[], int length, int flags, int width)
{
	int i, written_chars = 0;
	char padding_char;

	if (flags & _MINUS)
	{
		written_chars += write(1, buffer, length);

		for (i = 0; i < width - length; i++)
			written_chars += write(1, " ", 1);
	}
	else
	{
		padding_char = (flags & _ZERO) ? '0' : ' ';

		for (i = 0; i < width - length; i++)
			written_chars += write(1, &padding_char, 1);
		written_chars += write(1, buffer, length);
	}
	return (written_chars);
}
