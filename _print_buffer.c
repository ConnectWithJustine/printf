#include "main.h"
/**
 * print_buffer - buffer = exist, Prints the contents.
 * @buffer: Array of chars
 * @buff_in: Index at which to add next charater, represents the length.
 */
void print_buffer(char buffer[], int *buff_in)
{
	if (*buff_in > 0)
		write(1, &buffer[0], *buff_in);

	*buff_in = 0;
}