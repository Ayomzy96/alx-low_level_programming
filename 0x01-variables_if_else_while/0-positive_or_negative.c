#include<stdio.h>

/*
 * main - postive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	if ( n > 0)
		printf("%d is postive\n", n);
	else if ( n == 0)
		printf("%d is zero\n", n);
	else if ( n < 0)
		printf("%d is negative\n", n);

	return (0);
}
