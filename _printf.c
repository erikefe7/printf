#include <stdio.h> 
#include <stdlib.h>
#include "main.h"

/**
 * printf - function my printf
 * @format: strings with format to print
 *
 * Return: number of chars that print
 */
int _printf(cont char *format, ...)
{
	valist args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
