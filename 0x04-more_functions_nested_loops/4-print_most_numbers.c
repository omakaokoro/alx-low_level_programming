#include "main.h"
/**
* print_most_numbers - print numbers
*/
void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
	}
	_putchar('\n');
}
