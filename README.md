# 0x11. C - printf

Team Members:
- Justine Ugwu
- Tiny Bila

This project is part of the ALX-Africa SE program.

## Description:page_facing_up:

In this project, we are implementing our own version of the `printf` function in C. The `printf` function is a powerful tool for formatted output and is widely used in C programming. By creating our own `printf` function, we will gain a deeper understanding of string formatting and manipulating output in C.

The goal of the project is to replicate some of the basic functionality of the standard `printf` function, including handling format specifiers such as `%c`, `%s`, `%d`, `%x`, and more. We will implement these features while considering different data types, formatting options, and edge cases.

## Resources

- [Secrets of printf by Don colton](https://mega.nz/file/SjQBSQiI#Osz7xn-a5scNnLLO5Po0b1CFB6DqlxUfvc8KNl0ZViI)

## Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Getting Started

To get started with the project, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/ugwujustine/printf.git
```

2. Compile the code:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

3. man page:
```bash
man ./man_printf

## Usage

To use our custom `printf` function, include the `main.h` header file in your C program:

```c
#include "main.h"

int main(void) {
    my_printf("Hello, %s! Today is %dth of %s.\n", "Alx", 23, "June");

    return 0;
}
```

## Supported Format Specifiers

Our `printf` function supports the following format specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%d`: Print a decimal integer.
- `%x`: Print an integer in hexadecimal format.
- ...

Refer to the code implementation for additional details on the supported format specifiers and their usage.

## Examples

Here are a few examples demonstrating the usage of our `printf` function:

```c
my_printf("Hello, %s!\n", "World");
// Output: Hello, World!

my_printf("The value of x is %d and in hexadecimal it is %x.\n", 42, 42);
// Output: The value of x is 42 and in hexadecimal it is 2a.

my_printf("The character is %c.\n", 'A');
// Output: The character is A.
```


### Some files contained in this repository


------------

|Name                |Information                        |Relevant Files                         |
|----------------|-------------------------------|-----------------------------|
|`man_printf`|Man page of the _myprintf() function.| `None` |
|`main.h`	| Header file with the data type struct, standard libraries and custom prototypes.| `*.c compilation` |
`_putchar.c` | Custom putchar function. | `None` |

## Tasks required for this project

------------

0. #### I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life.
Write a function that produces output according to a format.
Handle the following conversion specifiers:
- c
- s
- %

1. #### Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:
- d
- i

2. ##### With a face like mine, I do better in print
Handle the following conversion specifiers:
- b

3. ##### What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
- u
- x
- o
- x
- X

4. ##### Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

5. ##### Handle the following custom conversion specifier
- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

6. ##### How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

7. ##### The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
- ´+´
- space
- ´#´

8. ##### Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
- l
- h
Conversion specifiers to handle: d, i, u, o, x, X

9. ##### Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

10. ##### The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

11. ##### It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

12. ##### Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

13. ##### Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
 - r : prints the reversed string

14. ##### [The flood of print has turned reading into a process of gulping rather than savoring]
Handle the following custom conversion specifier:
- R: prints the rot13'ed string

15. ##### *
All the above options work well together.


### License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).
```
