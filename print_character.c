#include "main.h"

/**
 * print_character - prints a character
 * @argument: the character will be printed.
 *
 * Return: 1.
 */

int print_character(va_list argument)
{
	_putchar(va_arg(argument, int));
	return (1);
}
