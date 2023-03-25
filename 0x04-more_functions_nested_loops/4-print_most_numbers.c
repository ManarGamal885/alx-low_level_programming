
#include "main.h"

/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}


