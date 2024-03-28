#ifndef PRINTF_PROJECT
#define PRINTF_PROJECT

/* libraies to include*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* functions*/
int _putchar(char c);
int print_character(va_list argument);
int print_string(va_list argument);
int print_poursontage(void);

#endif /* printf_project */
