<<<<<<< HEAD
#include "main.h" 

/**
 * format_handler - Handles the formatting of a single conversion specifier.
 * @specifier: The conversion specifier character.
 * @ar: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int format_handler(char specifier, va_list ar)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':
		count += print_char(ar);
		break;
	case 's':
		count += print_string(ar);
		break;
	case 'd':
	case 'i':
		count += print_decimal(ar);
		break;
	case 'b':
		count += print_binary(ar);
		break;
	case 'u':
		count += print_unsigned(ar);
		break;
	case 'o':
		count += print_octal(ar);
		break;
	case 'x':
		count += print_hexadecimal_lower(ar);
		break;
	case 'X':
		count += print_hexadecimal_upper(ar);
		break;
	case 'p':
		count += print_pointer(ar);
		break;
	case 'R':
		count += print_rot13(ar);
		break;
	case 'S':
        	count += print_string(ar);
        	break;
	case 'r':
        	count += print_reverse(ar);
        	break;
	default:
        	_putchar('%');
       		 _putchar(specifier);
        	count += 2;
        	break;
	}

	return (count);
} 
=======
#include "main.h"

/**
 * format_handler - Handles the formatting of a single conversion specifier.
 * @specifier: The conversion specifier character.
 * @ar: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int format_handler(char specifier, va_list ar)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':
		count += print_char(ar);
		break;
	case 's':
		count += print_string(ar);
		break;
	case 'd':
	case 'i':
		count += print_decimal(ar);
		break;
	case 'b':
		count += print_binary(ar);
		break;
	case 'u':
		count += print_unsigned(ar);
		break;
	case 'o':
		count += print_octal(ar);
		break;
	case 'x':
		count += print_hexadecimal_lower(ar);
		break;
	case 'X':
		count += print_hexadecimal_upper(ar);
		break;
	case 'p':
		count += print_pointer(ar);
		break;
	case 'R':
		count += print_rot13(ar);
		break;
	case 'S':
		count += print_string(ar);
		break;
	case 'r':
		count += print_reverse(ar);
		break;
	default:
		_putchar('%');
		_putchar(specifier);
		count += 2;
		break;
	}

	return (count);
}
>>>>>>> 151c3fea403225af32a3cec70063fc01b0ed687f
