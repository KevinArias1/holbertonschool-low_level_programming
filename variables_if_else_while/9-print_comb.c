#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (succes)
 */

int main() {
	 for (int i = 0; i < 10; ++i) {
		 putchar('0' + i);
		 if (i < 9) {
			  putchar(',');
			  putchar(' ');
		 }
	 }
	 putchar('\n');
	 return 0;
}
