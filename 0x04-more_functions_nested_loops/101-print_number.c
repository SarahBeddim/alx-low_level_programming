#include "main.h"

/**
 * print_number - main entry
 * @n: parameter
 * Return: void
 * Description: print number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != '0')
	{
		_putchar(n / 10);
		_putchar((n % 10) + '0');
	}
}
