#include "stdlib.h"
#include "stdio.h"
/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting strring
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a = strlen(n1);
int b = strlen(n2);
int carry = 0;
int i = size_r - 1;
while ((a > 0 || b > 0 || carry > 0) && i > 0)
{
	char acc = carry;

	if (a > 0)
	{
		acc += *(n1 + a - 1) - 48;
	}

	if (b > 0)
	{
		acc += *(n2 + b - 1) - 48;
	}

	if (acc >= 10)
	{
		acc -= 10;
		carry = 1;
	} else
	{
		carry = 0;
	}
	*(r + i - 1) = acc + 48;
    printf("%c %c = %c carry %d \n",*(n1 + a -1), *(n2 +b -1 ),acc+48, carry);
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
