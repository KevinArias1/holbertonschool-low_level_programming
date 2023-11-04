#include "main.h"
/**
 * print_last_digit - check the code
 * @num: num to get the last digit
 * Return: Always 0.
 */
int print_last_digit(int num)
{
int result = num % 10;
_putchar(result + '0');
return (result);
}
