#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day
 * @n: - from 00:00 to 23:59 and contains while loop counts
 * and resets the minutes
 * return (0)
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder = 0;
	int mins_reminder = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
	{
	mins_reminder = minutes %10;
	hours_reminder = hours %10
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putchar('\n');
}
hours++;
minutes = 0;
}
}	
}
