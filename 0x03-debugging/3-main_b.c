#include <stdio.h>
#include "holberton.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap yeas into account
 *Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 24;
	year = 2004;

	printf("Date: %02d/%02d/%04\n", month, day, year);

	day = convert_day(month, day);

	return (0);
}

