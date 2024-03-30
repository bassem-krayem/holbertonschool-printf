#include "main.h"

/**
 * _printf - cloning the standard printf function
 * @format: pointer to string
 * @...: list of arguments passed to the function
 *
 * Return: length of the string
 */
int _printf(const char * const format, ...)
{
	spec_t spec_list[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'d', print_decimal}, {'i', print_decimal}, {'u', print_unsigned},
		{'o', print_octal}, {'X', print_HEX}, {'x', print_hex},
		{'p', print_address}, {'\0', NULL}};

	va_list args;
	int count = 0, i = 0, j = 0;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			while (spec_list[j].c)
			{
				if (format[i + 1] == spec_list[j].c)
				{
					count += spec_list[j].spec(args);
					break;
				}
				j++;
			}
			if (!spec_list[j].c)
			{
				count += _putchar('%');
				count += _putchar(format[i + 1]);
			}
			j = 0;
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}}
	va_end(args);
	return (count);
}
