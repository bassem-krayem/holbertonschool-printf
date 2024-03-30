#include "main.h"

/**
 * print_decimal - convert and write decimal numbers
 * @args: pointer to the arguments list
 *
 * Return: length of the string of digits
 */

int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int i = 0;
	int digit_number = 0;
	int digit_string[21];
	unsigned int abs = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		abs = num * -1;
		_putchar('-');
		digit_number++;
	}
	if (num > 0)
		abs = num;
	while (abs != 0)
	{
		digit_string[i] = (abs % 10);
		abs /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(digit_string[i - 1] + '0');
		digit_number++;
		i--;
	}
	return (digit_number);
}

/**
 * print_unsigned - convert and write decimal numbers
 * @args: pointer to the arguments list
 *
 * Return: length of the string of digits
 */

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0;
	int digit_number = 0;
	int digit_string[21];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		digit_string[i] = (num % 10);
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(digit_string[i - 1] + '0');
		digit_number++;
		i--;
	}
	return (digit_number);
}

/**
 * print_octal - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */

int print_octal(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

/**
 * print_hex - prints a hex number.
 * @val: arguments.
 * Return: counter.
 */

int print_hex(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
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
 * print_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int print_HEX(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
