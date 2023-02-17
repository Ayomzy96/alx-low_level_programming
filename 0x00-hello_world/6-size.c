#include<stdio.h>

/**
 * main - size of data type
 *
 * Return: Always 0
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %d byte(s)\n", sizeof(acharacter));
	printf("size of a int: %d byte(s)\n", sizeof(ainteger));
	printf("size of a long int: %d byte(s)\n", sizeof(along));
	printf("size of a long long int: %d byte(s)\n", sizeof(alonglong));
	printf("size of a float: %d byte(s)\n", sizeof(afloat));

	return (0);
