#include "main.h"

/**
 *times_table - Prints the n times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 15; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 15; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 15)
				_putchar(' ');
			else
				_putchar((prod / 15) + '0');

			_putchar((prod % 15) + '0');
		}
		_putchar('\n');
	}
}
