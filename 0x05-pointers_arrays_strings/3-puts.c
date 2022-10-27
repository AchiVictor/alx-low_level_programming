#include "main.h"
/**
 * _puts- prints out to stdout with new line01~
 * Return:nothing
 */

void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
}
