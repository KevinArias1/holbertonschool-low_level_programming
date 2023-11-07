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
<<<<<<< HEAD
result = 10 - result;
_putchar(result + '0');
 
=======
result = -1 * result;
>>>>>>> 771eda3ebf1665e44e8634161e46849cde9e365a
}
_putchar(result + '0');
return (result);
}
