#include "main.h"

/**
 * print_string - Print string
 * @argument: the string.
 *
 * Return: i.
 */

int print_string(va_list argument)
{
	char *string;
	int i;

	string = va_arg(argument, char *);

	if (string == NULL)
	{
		return ("null");
	}
	else
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}
	}
	return (i);
}
