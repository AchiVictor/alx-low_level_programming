#include "main.h"
/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sch = "School";

	while (*sch)
	{
		_putchar(*sch);
		sch++;

	}
	_putchar('\n');

	return (0);
}
