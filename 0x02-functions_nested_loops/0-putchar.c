#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char characters[] = "_putchar";

	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(characters[i]);
	}
	_putchar(10);
	return (0);
}
