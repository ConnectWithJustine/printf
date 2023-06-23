#include "main.h"

/**
 * _putchar - a function that writes the character c to stdout
 * @c: the character to print
 *
 * Rturn: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
