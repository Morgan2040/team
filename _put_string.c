#include "main.h"

/**
  * _put_string - A C function to print string
  * @string: String to be printed.
  * Return: Returns total number of character.
  */
int _put_string(char *string)
{
	/* Declaring & initializing variables */
	int id_x = 0, value_r = 0;

	/* Checking if input string pointer is not NULL */
	if (string)
	{
		/* Iterate through each character of string until null terminator */
		while (string[id_x] != '\0')
		{
			_putchar(string[id_x]);

			value_r += 1;
			id_x++;
		}
	}
	return (value_r);
}
