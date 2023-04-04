#include "stdlib.h"
#include "stdio.h"
/**
 * infinite_add - adds two strings
 * @n1: the first string
 * @n2: the first string
 * @r: where to store the result
 * @size_r: the size of r
 * Return: the resulting string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = 0;
int b = 0;
int carry = 0;
int i = size_r - 1;
while (n1[a] != '\0')
	a++;
while (n2[b] != '\0')
	b++;
while ((a > 0 || b > 0 || carry > 0) && i > 0)
{
	char acc = carry;

	if (a > 0)
		acc += *(n1 + a - 1) - 48;

	if (b > 0)
		acc += *(n2 + b - 1) - 48;

	if (acc >= 10)
	{
		acc -= 10;
		carry = 1;
	} else
	{
		carry = 0;
	}
	*(r + i - 1) = acc + 48;
	i -= 1;
	a -= 1;
	b -= 1;
}

if (i > 0 || (a <= 0 && b <= 0 && carry == 0))
{
	*(r + size_r - 1) = '\x0';
	return (r + i);
} else
{
	return (0);
}
}
