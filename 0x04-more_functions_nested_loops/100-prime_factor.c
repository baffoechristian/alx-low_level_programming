#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 * betty style doc for function main goes there
 * main - prints the largest prime factor of a number
 * Return: 0 (Success)
 */

int main(void)
{
long int x, y;
x = 612852475143;
for (y = 2; y <= x; y++)
{
if (x % y == 0)
{
x /= y;
y--;
}
}
printf("%ld\x", y);
return (0);
	unsigned long int n = 612852475143, i = 3;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
