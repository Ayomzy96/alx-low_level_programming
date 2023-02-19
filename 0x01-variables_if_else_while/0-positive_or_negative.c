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
		printf("%d is postive");
	else if ( n == 0)
		printf("%d is zero");
	else if ( n < 0)
		printf("%d is negative");
	return (0);
}
