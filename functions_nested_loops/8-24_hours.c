#include "main.h"
<<<<<<< HEAD

void jack_bauer(void)
{

=======
/**
 * jack_bauer - print hour and minutes of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
if (i < 10)
{
_putchar('0');
_putchar('0' + i);
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar(58);

if (j < 10)
{
_putchar('0');
_putchar('0' + j);
}
else
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
>>>>>>> 771eda3ebf1665e44e8634161e46849cde9e365a
}
