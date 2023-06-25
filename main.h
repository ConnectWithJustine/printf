#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>

/* Core _printf function */
int _printf(const char *format, ...);

/**
 * struct format - format handler function
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} format_handler;

/* Custom conversion specifiers */
int print_percent(__attribute__((unused)) va_list ar);
int print_hexadecimal_upper(va_list ar);
int print_hexadecimal_lower(va_list ar);
int print_unsigned(va_list ar);
int print_pointer(va_list ar);
int print_decimal(va_list ar);
int print_binary(va_list ar);
int print_string(va_list ar);
int print_octal(va_list ar);
int print_char(va_list ar);
int print_rot13(va_list ar);

/* others */
char *_strcpy(char *dest, char *src);
int print_reverse(va_list ar);
int _strlen(char *str);
int print_hex(char c);
int _putchar(char c);

#endif /* MAIN_H */

