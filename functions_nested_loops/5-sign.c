#include "main.h"
/**
 * print_sing - print sing of a number
 * @n - funtion parametre
 * return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
			{
			_putchar(0);
			return ('0');
			}
	else
	{
		_putchar(45);
		return (-1);
	}
}
