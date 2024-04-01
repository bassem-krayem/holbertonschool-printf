# <p align="center">C - Printf project</p>

The Printf project is a customized implementation of the printf function in the C language. The printf function is a standard library function used to display formatted messages on standard output (usually the console).

## Table of Contents

-   [Objective](#Objective)
-	[Compilation command](#Compilation-command)	
-   [Requirements](#Requirements)
-   [Mandatory Tasks](#Mandatory-tasks)
-   [Specifiers](#Specifiers)
-	[Examples and tests](#Examples-and-tests)
-	[Man page](#Man-page)
-   [Installation](#Installation)
-   [Authors](#Authors)

## Objective

The objective of this project is to create our own printf function to understand the underlying concepts related to variable arguments and format specifiers in C.

## Compilation command

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Requirements

-	Allowed editors: `vi`, `vim`, `emacs`
-   All files will be compiled on Ubuntu 20.04 LTS
-   Code must follow the `Betty` style
-   Global variables are not allowed
-	No more than  functions per file
-	All prototypes for functions should be included in our header file `main.h`
-   Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)

## Mandatory Tasks

### Task 0
	
-   Write a function that produces output according to a format and the following conversion specifiers `c`, `s`, and `%`.

### Task 1

-   Handle the following conversion specifiers `d`, `i`.

### Task 2

-   Create a man page for your function.

## Specifiers

\_printf supports the following format specifiers:

- %c: prints a single character
- %s: prints a string of characters
- %%: prints a literal '%' character
- %d: prints a decimal number
- %i: signed integer number
- %u: prints an unsigned decimal number
- %X: prints an unsigned hexadecimal integer in uppercase
- %x: prints an unsigned hexadecimal integer in lowercase
- %o: prints an unsigned octal integer
- %p: prints a pointer address

## Examples and tests

My own tests in comparison with the standard printf function(main.c file):

*Input*

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

*Output*

```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]```
## Man page
More information with the command: `./man_3_printf` or `man printf`

## Installation

1.  Clone this repository on your local machine Using this command:

`git clone https://github.com/bassem-krayem/holbertonschool-printf.git`

2.  Compile the source files with the following command:

```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf```

## Authors
#### bassem krayem
-   Github: [@bassem-krayem](https://github.com/bassem-krayem/)
