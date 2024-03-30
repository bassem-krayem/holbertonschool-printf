#include "main.h"

/**
 * print_char - write a single character
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */

int print_char(va_list args)
{
	int count = 0;

	_putchar(va_arg(args, int));
	count++;
	return (count);
}

/**
 * print_string - write a string of characters
 * @args: pointer to the arguments list
 *
 * Return: length of the string
 */

int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - write a percentage symbol
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */

int print_percent(__attribute__((unused)) va_list args)
{
	int count = 0;

	_putchar('%');
	count++;

	return (count);
}

/**
 * print_hex_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */

int print_hex_extra(unsigned long int num)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

/**
 * print_address - prints an address.
 * @val: arguments.
 * Return: i.
 */

int print_address(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
