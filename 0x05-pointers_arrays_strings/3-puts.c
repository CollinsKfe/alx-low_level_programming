#include "main.h"

/**
 * _puts - Prints a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
	fot (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}