#include <unistd.h>
/**
  * _putchar - A C function writes a character to the stdout
  * @chr: The character to print
  * Return: Returns 1 on success.
  */

int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
