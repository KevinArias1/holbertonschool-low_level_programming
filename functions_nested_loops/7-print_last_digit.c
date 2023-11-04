#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check the code
 * @num: num to get the last digit
 * Return: a digit.
 */
int print_last_digit(int n)
{
int num = abs(n);
int result= num % 10;
_putchar(result + '0');
return (result);
}
