#include "main.h"

/**
 * times_table - print times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i, j, times;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
times = j * i;
if (times < 10)
{
_putchar('0' + times);
}
else
{
_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
}
if (i < 10 && j < 9)
{
_putchar(',');
_putchar(' ');
if ((j + 1) * i < 10)
{
_putchar(' ');
}
}

}
_putchar('\n');
}
}
