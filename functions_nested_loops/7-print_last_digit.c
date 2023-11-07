#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check the code
 * @n: num to get the last digit
 * Return: a digit.
 */

int print_last_digit(int n)
{
int result = n % 10;
if (n < 0)
{
result = 10 - result;
_putchar(result + '0');
 
}
_putchar(result + '0');
return (result);
}
