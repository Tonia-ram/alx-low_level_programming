#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 from 0 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
