#include <stdio.h> 
/**
 *  * main - hexadecimal
 *   * Return: always return 0
 *    */

int main(void)
{
	char c;

	int d;

	c= 'a';
	d= 0;
	while
		(d < 10) {
			putchar(d + '0');
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
