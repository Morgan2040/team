#include "main.h"

/**
  * _printf - A C function that produces output.
  * according to a format.
  * @format: The character string.
  * Return: Returns the number of characters printed
  * excluding the null byte used to end output to strings
  */

int _printf(const char *format, ...)
{
	/* Declaring & Initializing variables */
	unsigned int u = 0, r_va = 0;
	va_list args;

	va_start(args, format);

	/* Looping through the format string */
	for (; format[u] != '\0'; u++)
	{
		if (format[u] == '\0') /* Checking if character is NULL */
		{
			return (-1);
		}
		else if (format[u] != '%') /* Checking if character is not '%' */
		{
			_putchar(format[u]);
		}
		else if (format[u + 1] == 'c') /* Checking for the 'c' format specifier */
		{
			_putchar(va_arg(args, int));
			u++; /* Skip the next character 'c' */
		}
		else if (format[u + 1] == 's') /* Checking for the 's' format specifier */
		{
			int rv = _put_string(va_arg(args, char *));

			u++; /* Skip the next character 's' */
			r_va += (rv - 1);
		}
		else if (format[u + 1] == '%')
		{
			_putchar('%'); /* Outputs a literal '%' character */
			u++;
		}
		r_va += 1;
	}
	va_end(args);
	return (r_va);
}
