#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * struct specifier - Structure of a format specifier
 * and corresponding function.
 * @c: Format specifier of the type of data to be processed.
 * @spec: Function pointer to corresponding function processing the data.
 *
 * Description: This structure associate format specifiers with functions
 *	in variadic functions in order to process various types
 *	of data with the provided format specifier.
 *	The c member corresponds to the format specifier
 *	and the format member is a function pointer
 *	poiting to the function that will process the data of that type.
 */

typedef struct specifier
{
	char c;
	int (*spec)(va_list);
} spec_t;

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_hex_extra(unsigned long int num);
int print_address(va_list val);
int _printf(const char *format, ...);

#endif