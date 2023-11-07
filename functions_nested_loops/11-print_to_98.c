#include "main.h"

/**
 * print_to_98 - print numbers to n to 98
 * @n: n to begin with
 * Return: void
 */
void print_to_98(int n)
{
int i = n;
int fin = 98;
while (i != fin)
{
int valor = i;
if (i < 0)
{
_putchar('-');
valor = i * -1;
}
if (valor < 10)
{
_putchar('0' + valor);
}
else if (valor >= 100)
{
_putchar('0' + (valor / 100));
_putchar('0' + ((valor - (100 * (valor / 100))) / 10));
_putchar('0' + (valor % 10));
}
else
{
_putchar('0' + (valor / 10));
_putchar('0' + (valor % 10));
}
_putchar(',');
_putchar(' ');
if (i < fin)
{
i++;
}
else
{
i--;
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
